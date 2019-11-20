/**
 * PowerDNS Authoritative HTTP API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.13
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Comment.h
 *
 * A comment about an RRSet.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Comment_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Comment_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A comment about an RRSet.
/// </summary>
class  Comment
    : public ModelBase
{
public:
    Comment();
    virtual ~Comment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Comment members

    /// <summary>
    /// The actual comment
    /// </summary>
    utility::string_t getContent() const;
    bool contentIsSet() const;
    void unsetContent();

    void setContent(const utility::string_t& value);

    /// <summary>
    /// Name of an account that added the comment
    /// </summary>
    utility::string_t getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const utility::string_t& value);

    /// <summary>
    /// Timestamp of the last change to the comment
    /// </summary>
    int32_t getModifiedAt() const;
    bool modifiedAtIsSet() const;
    void unsetModified_at();

    void setModifiedAt(int32_t value);


protected:
    utility::string_t m_Content;
    bool m_ContentIsSet;
    utility::string_t m_Account;
    bool m_AccountIsSet;
    int32_t m_Modified_at;
    bool m_Modified_atIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Comment_H_ */
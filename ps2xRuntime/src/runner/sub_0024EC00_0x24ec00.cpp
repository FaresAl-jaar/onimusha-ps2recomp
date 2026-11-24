#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024EC00
// Address: 0x24ec00 - 0x24efd0
void sub_0024EC00_0x24ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EC00_0x24ec00");
#endif

    switch (ctx->pc) {
        case 0x24ec00u: goto label_24ec00;
        case 0x24ec04u: goto label_24ec04;
        case 0x24ec08u: goto label_24ec08;
        case 0x24ec0cu: goto label_24ec0c;
        case 0x24ec10u: goto label_24ec10;
        case 0x24ec14u: goto label_24ec14;
        case 0x24ec18u: goto label_24ec18;
        case 0x24ec1cu: goto label_24ec1c;
        case 0x24ec20u: goto label_24ec20;
        case 0x24ec24u: goto label_24ec24;
        case 0x24ec28u: goto label_24ec28;
        case 0x24ec2cu: goto label_24ec2c;
        case 0x24ec30u: goto label_24ec30;
        case 0x24ec34u: goto label_24ec34;
        case 0x24ec38u: goto label_24ec38;
        case 0x24ec3cu: goto label_24ec3c;
        case 0x24ec40u: goto label_24ec40;
        case 0x24ec44u: goto label_24ec44;
        case 0x24ec48u: goto label_24ec48;
        case 0x24ec4cu: goto label_24ec4c;
        case 0x24ec50u: goto label_24ec50;
        case 0x24ec54u: goto label_24ec54;
        case 0x24ec58u: goto label_24ec58;
        case 0x24ec5cu: goto label_24ec5c;
        case 0x24ec60u: goto label_24ec60;
        case 0x24ec64u: goto label_24ec64;
        case 0x24ec68u: goto label_24ec68;
        case 0x24ec6cu: goto label_24ec6c;
        case 0x24ec70u: goto label_24ec70;
        case 0x24ec74u: goto label_24ec74;
        case 0x24ec78u: goto label_24ec78;
        case 0x24ec7cu: goto label_24ec7c;
        case 0x24ec80u: goto label_24ec80;
        case 0x24ec84u: goto label_24ec84;
        case 0x24ec88u: goto label_24ec88;
        case 0x24ec8cu: goto label_24ec8c;
        case 0x24ec90u: goto label_24ec90;
        case 0x24ec94u: goto label_24ec94;
        case 0x24ec98u: goto label_24ec98;
        case 0x24ec9cu: goto label_24ec9c;
        case 0x24eca0u: goto label_24eca0;
        case 0x24eca4u: goto label_24eca4;
        case 0x24eca8u: goto label_24eca8;
        case 0x24ecacu: goto label_24ecac;
        case 0x24ecb0u: goto label_24ecb0;
        case 0x24ecb4u: goto label_24ecb4;
        case 0x24ecb8u: goto label_24ecb8;
        case 0x24ecbcu: goto label_24ecbc;
        case 0x24ecc0u: goto label_24ecc0;
        case 0x24ecc4u: goto label_24ecc4;
        case 0x24ecc8u: goto label_24ecc8;
        case 0x24ecccu: goto label_24eccc;
        case 0x24ecd0u: goto label_24ecd0;
        case 0x24ecd4u: goto label_24ecd4;
        case 0x24ecd8u: goto label_24ecd8;
        case 0x24ecdcu: goto label_24ecdc;
        case 0x24ece0u: goto label_24ece0;
        case 0x24ece4u: goto label_24ece4;
        case 0x24ece8u: goto label_24ece8;
        case 0x24ececu: goto label_24ecec;
        case 0x24ecf0u: goto label_24ecf0;
        case 0x24ecf4u: goto label_24ecf4;
        case 0x24ecf8u: goto label_24ecf8;
        case 0x24ecfcu: goto label_24ecfc;
        case 0x24ed00u: goto label_24ed00;
        case 0x24ed04u: goto label_24ed04;
        case 0x24ed08u: goto label_24ed08;
        case 0x24ed0cu: goto label_24ed0c;
        case 0x24ed10u: goto label_24ed10;
        case 0x24ed14u: goto label_24ed14;
        case 0x24ed18u: goto label_24ed18;
        case 0x24ed1cu: goto label_24ed1c;
        case 0x24ed20u: goto label_24ed20;
        case 0x24ed24u: goto label_24ed24;
        case 0x24ed28u: goto label_24ed28;
        case 0x24ed2cu: goto label_24ed2c;
        case 0x24ed30u: goto label_24ed30;
        case 0x24ed34u: goto label_24ed34;
        case 0x24ed38u: goto label_24ed38;
        case 0x24ed3cu: goto label_24ed3c;
        case 0x24ed40u: goto label_24ed40;
        case 0x24ed44u: goto label_24ed44;
        case 0x24ed48u: goto label_24ed48;
        case 0x24ed4cu: goto label_24ed4c;
        case 0x24ed50u: goto label_24ed50;
        case 0x24ed54u: goto label_24ed54;
        case 0x24ed58u: goto label_24ed58;
        case 0x24ed5cu: goto label_24ed5c;
        case 0x24ed60u: goto label_24ed60;
        case 0x24ed64u: goto label_24ed64;
        case 0x24ed68u: goto label_24ed68;
        case 0x24ed6cu: goto label_24ed6c;
        case 0x24ed70u: goto label_24ed70;
        case 0x24ed74u: goto label_24ed74;
        case 0x24ed78u: goto label_24ed78;
        case 0x24ed7cu: goto label_24ed7c;
        case 0x24ed80u: goto label_24ed80;
        case 0x24ed84u: goto label_24ed84;
        case 0x24ed88u: goto label_24ed88;
        case 0x24ed8cu: goto label_24ed8c;
        case 0x24ed90u: goto label_24ed90;
        case 0x24ed94u: goto label_24ed94;
        case 0x24ed98u: goto label_24ed98;
        case 0x24ed9cu: goto label_24ed9c;
        case 0x24eda0u: goto label_24eda0;
        case 0x24eda4u: goto label_24eda4;
        case 0x24eda8u: goto label_24eda8;
        case 0x24edacu: goto label_24edac;
        case 0x24edb0u: goto label_24edb0;
        case 0x24edb4u: goto label_24edb4;
        case 0x24edb8u: goto label_24edb8;
        case 0x24edbcu: goto label_24edbc;
        case 0x24edc0u: goto label_24edc0;
        case 0x24edc4u: goto label_24edc4;
        case 0x24edc8u: goto label_24edc8;
        case 0x24edccu: goto label_24edcc;
        case 0x24edd0u: goto label_24edd0;
        case 0x24edd4u: goto label_24edd4;
        case 0x24edd8u: goto label_24edd8;
        case 0x24eddcu: goto label_24eddc;
        case 0x24ede0u: goto label_24ede0;
        case 0x24ede4u: goto label_24ede4;
        case 0x24ede8u: goto label_24ede8;
        case 0x24edecu: goto label_24edec;
        case 0x24edf0u: goto label_24edf0;
        case 0x24edf4u: goto label_24edf4;
        case 0x24edf8u: goto label_24edf8;
        case 0x24edfcu: goto label_24edfc;
        case 0x24ee00u: goto label_24ee00;
        case 0x24ee04u: goto label_24ee04;
        case 0x24ee08u: goto label_24ee08;
        case 0x24ee0cu: goto label_24ee0c;
        case 0x24ee10u: goto label_24ee10;
        case 0x24ee14u: goto label_24ee14;
        case 0x24ee18u: goto label_24ee18;
        case 0x24ee1cu: goto label_24ee1c;
        case 0x24ee20u: goto label_24ee20;
        case 0x24ee24u: goto label_24ee24;
        case 0x24ee28u: goto label_24ee28;
        case 0x24ee2cu: goto label_24ee2c;
        case 0x24ee30u: goto label_24ee30;
        case 0x24ee34u: goto label_24ee34;
        case 0x24ee38u: goto label_24ee38;
        case 0x24ee3cu: goto label_24ee3c;
        case 0x24ee40u: goto label_24ee40;
        case 0x24ee44u: goto label_24ee44;
        case 0x24ee48u: goto label_24ee48;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee50u: goto label_24ee50;
        case 0x24ee54u: goto label_24ee54;
        case 0x24ee58u: goto label_24ee58;
        case 0x24ee5cu: goto label_24ee5c;
        case 0x24ee60u: goto label_24ee60;
        case 0x24ee64u: goto label_24ee64;
        case 0x24ee68u: goto label_24ee68;
        case 0x24ee6cu: goto label_24ee6c;
        case 0x24ee70u: goto label_24ee70;
        case 0x24ee74u: goto label_24ee74;
        case 0x24ee78u: goto label_24ee78;
        case 0x24ee7cu: goto label_24ee7c;
        case 0x24ee80u: goto label_24ee80;
        case 0x24ee84u: goto label_24ee84;
        case 0x24ee88u: goto label_24ee88;
        case 0x24ee8cu: goto label_24ee8c;
        case 0x24ee90u: goto label_24ee90;
        case 0x24ee94u: goto label_24ee94;
        case 0x24ee98u: goto label_24ee98;
        case 0x24ee9cu: goto label_24ee9c;
        case 0x24eea0u: goto label_24eea0;
        case 0x24eea4u: goto label_24eea4;
        case 0x24eea8u: goto label_24eea8;
        case 0x24eeacu: goto label_24eeac;
        case 0x24eeb0u: goto label_24eeb0;
        case 0x24eeb4u: goto label_24eeb4;
        case 0x24eeb8u: goto label_24eeb8;
        case 0x24eebcu: goto label_24eebc;
        case 0x24eec0u: goto label_24eec0;
        case 0x24eec4u: goto label_24eec4;
        case 0x24eec8u: goto label_24eec8;
        case 0x24eeccu: goto label_24eecc;
        case 0x24eed0u: goto label_24eed0;
        case 0x24eed4u: goto label_24eed4;
        case 0x24eed8u: goto label_24eed8;
        case 0x24eedcu: goto label_24eedc;
        case 0x24eee0u: goto label_24eee0;
        case 0x24eee4u: goto label_24eee4;
        case 0x24eee8u: goto label_24eee8;
        case 0x24eeecu: goto label_24eeec;
        case 0x24eef0u: goto label_24eef0;
        case 0x24eef4u: goto label_24eef4;
        case 0x24eef8u: goto label_24eef8;
        case 0x24eefcu: goto label_24eefc;
        case 0x24ef00u: goto label_24ef00;
        case 0x24ef04u: goto label_24ef04;
        case 0x24ef08u: goto label_24ef08;
        case 0x24ef0cu: goto label_24ef0c;
        case 0x24ef10u: goto label_24ef10;
        case 0x24ef14u: goto label_24ef14;
        case 0x24ef18u: goto label_24ef18;
        case 0x24ef1cu: goto label_24ef1c;
        case 0x24ef20u: goto label_24ef20;
        case 0x24ef24u: goto label_24ef24;
        case 0x24ef28u: goto label_24ef28;
        case 0x24ef2cu: goto label_24ef2c;
        case 0x24ef30u: goto label_24ef30;
        case 0x24ef34u: goto label_24ef34;
        case 0x24ef38u: goto label_24ef38;
        case 0x24ef3cu: goto label_24ef3c;
        case 0x24ef40u: goto label_24ef40;
        case 0x24ef44u: goto label_24ef44;
        case 0x24ef48u: goto label_24ef48;
        case 0x24ef4cu: goto label_24ef4c;
        case 0x24ef50u: goto label_24ef50;
        case 0x24ef54u: goto label_24ef54;
        case 0x24ef58u: goto label_24ef58;
        case 0x24ef5cu: goto label_24ef5c;
        case 0x24ef60u: goto label_24ef60;
        case 0x24ef64u: goto label_24ef64;
        case 0x24ef68u: goto label_24ef68;
        case 0x24ef6cu: goto label_24ef6c;
        case 0x24ef70u: goto label_24ef70;
        case 0x24ef74u: goto label_24ef74;
        case 0x24ef78u: goto label_24ef78;
        case 0x24ef7cu: goto label_24ef7c;
        case 0x24ef80u: goto label_24ef80;
        case 0x24ef84u: goto label_24ef84;
        case 0x24ef88u: goto label_24ef88;
        case 0x24ef8cu: goto label_24ef8c;
        case 0x24ef90u: goto label_24ef90;
        case 0x24ef94u: goto label_24ef94;
        case 0x24ef98u: goto label_24ef98;
        case 0x24ef9cu: goto label_24ef9c;
        case 0x24efa0u: goto label_24efa0;
        case 0x24efa4u: goto label_24efa4;
        case 0x24efa8u: goto label_24efa8;
        case 0x24efacu: goto label_24efac;
        case 0x24efb0u: goto label_24efb0;
        case 0x24efb4u: goto label_24efb4;
        case 0x24efb8u: goto label_24efb8;
        case 0x24efbcu: goto label_24efbc;
        case 0x24efc0u: goto label_24efc0;
        case 0x24efc4u: goto label_24efc4;
        case 0x24efc8u: goto label_24efc8;
        case 0x24efccu: goto label_24efcc;
        default: break;
    }

    ctx->pc = 0x24ec00u;

label_24ec00:
    // 0x24ec00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24ec04:
    // 0x24ec04: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x24ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_24ec08:
    // 0x24ec08: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x24ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_24ec0c:
    // 0x24ec0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24ec0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ec10:
    // 0x24ec10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_24ec14:
    // 0x24ec14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24ec14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24ec18:
    // 0x24ec18: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x24ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_24ec1c:
    // 0x24ec1c: 0x24539930  addiu       $s3, $v0, -0x66D0
    ctx->pc = 0x24ec1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
label_24ec20:
    // 0x24ec20: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x24ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_24ec24:
    // 0x24ec24: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_24ec28:
    // 0x24ec28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_24ec2c:
    // 0x24ec2c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x24ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_24ec30:
    // 0x24ec30: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x24ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_24ec34:
    // 0x24ec34: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x24ec34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_24ec38:
    // 0x24ec38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24ec3c:
    if (ctx->pc == 0x24EC3Cu) {
        ctx->pc = 0x24EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC38u;
        // 0x24ec3c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC40u;
        goto label_24ec40;
    }
    ctx->pc = 0x24EC38u;
    {
        const bool branch_taken_0x24ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC38u;
        // 0x24ec3c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec38) {
            ctx->pc = 0x24EC6Cu;
            goto label_24ec6c;
        }
    }
    ctx->pc = 0x24EC40u;
label_24ec40:
    // 0x24ec40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ec44:
    // 0x24ec44: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x24ec44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ec48:
    // 0x24ec48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ec48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24ec4c:
    // 0x24ec4c: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x24ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_24ec50:
    // 0x24ec50: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x24ec50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_24ec54:
    // 0x24ec54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24ec58:
    if (ctx->pc == 0x24EC58u) {
        ctx->pc = 0x24EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC54u;
        // 0x24ec58: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC5Cu;
        goto label_24ec5c;
    }
    ctx->pc = 0x24EC54u;
    {
        const bool branch_taken_0x24ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC54u;
        // 0x24ec58: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec54) {
            ctx->pc = 0x24EC6Cu;
            goto label_24ec6c;
        }
    }
    ctx->pc = 0x24EC5Cu;
label_24ec5c:
    // 0x24ec5c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x24ec5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_24ec60:
    // 0x24ec60: 0x0  nop
    ctx->pc = 0x24ec60u;
    // NOP
label_24ec64:
    // 0x24ec64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_24ec68:
    if (ctx->pc == 0x24EC68u) {
        ctx->pc = 0x24EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC64u;
        // 0x24ec68: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC6Cu;
        goto label_24ec6c;
    }
    ctx->pc = 0x24EC64u;
    {
        const bool branch_taken_0x24ec64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC64u;
        // 0x24ec68: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec64) {
            ctx->pc = 0x24EC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ec48;
        }
    }
    ctx->pc = 0x24EC6Cu;
label_24ec6c:
    // 0x24ec6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24ec70:
    // 0x24ec70: 0x122300cd  beq         $s1, $v1, . + 4 + (0xCD << 2)
label_24ec74:
    if (ctx->pc == 0x24EC74u) {
        ctx->pc = 0x24EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC70u;
        // 0x24ec74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC78u;
        goto label_24ec78;
    }
    ctx->pc = 0x24EC70u;
    {
        const bool branch_taken_0x24ec70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x24EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC70u;
        // 0x24ec74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec70) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24EC78u;
label_24ec78:
    // 0x24ec78: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24ec7c:
    // 0x24ec7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ec80:
    // 0x24ec80: 0x8c4474d8  lw          $a0, 0x74D8($v0)
    ctx->pc = 0x24ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29912)));
label_24ec84:
    // 0x24ec84: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_24ec88:
    if (ctx->pc == 0x24EC88u) {
        ctx->pc = 0x24EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC84u;
        // 0x24ec88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC8Cu;
        goto label_24ec8c;
    }
    ctx->pc = 0x24EC84u;
    {
        const bool branch_taken_0x24ec84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ec84) {
            ctx->pc = 0x24EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC84u;
            // 0x24ec88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ECA8u;
            goto label_24eca8;
        }
    }
    ctx->pc = 0x24EC8Cu;
label_24ec8c:
    // 0x24ec8c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24ec90:
    // 0x24ec90: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29904)));
label_24ec94:
    // 0x24ec94: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_24ec98:
    if (ctx->pc == 0x24EC98u) {
        ctx->pc = 0x24EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC94u;
        // 0x24ec98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC9Cu;
        goto label_24ec9c;
    }
    ctx->pc = 0x24EC94u;
    {
        const bool branch_taken_0x24ec94 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x24ec94) {
            ctx->pc = 0x24EC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC94u;
            // 0x24ec98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ECA8u;
            goto label_24eca8;
        }
    }
    ctx->pc = 0x24EC9Cu;
label_24ec9c:
    // 0x24ec9c: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x24ec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_24eca0:
    // 0x24eca0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_24eca4:
    if (ctx->pc == 0x24ECA4u) {
        ctx->pc = 0x24ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECA0u;
        // 0x24eca4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECA8u;
        goto label_24eca8;
    }
    ctx->pc = 0x24ECA0u;
    {
        const bool branch_taken_0x24eca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECA0u;
        // 0x24eca4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eca0) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24ECA8u;
label_24eca8:
    // 0x24eca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ecac:
    // 0x24ecac: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x24ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24ecb0:
    // 0x24ecb0: 0xc049590  jal         func_125640
label_24ecb4:
    if (ctx->pc == 0x24ECB4u) {
        ctx->pc = 0x24ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECB0u;
        // 0x24ecb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECB8u;
        goto label_24ecb8;
    }
    ctx->pc = 0x24ECB0u;
    SET_GPR_U32(ctx, 31, 0x24ECB8u);
    ctx->pc = 0x24ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECB0u;
    // 0x24ecb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24ECB0u, 0x24ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECB8u;
label_24ecb8:
    // 0x24ecb8: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_24ecbc:
    if (ctx->pc == 0x24ECBCu) {
        ctx->pc = 0x24ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECB8u;
        // 0x24ecbc: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECC0u;
        goto label_24ecc0;
    }
    ctx->pc = 0x24ECB8u;
    {
        const bool branch_taken_0x24ecb8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECB8u;
        // 0x24ecbc: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecb8) {
            ctx->pc = 0x24ED38u;
            goto label_24ed38;
        }
    }
    ctx->pc = 0x24ECC0u;
label_24ecc0:
    // 0x24ecc0: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x24ecc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_24ecc4:
    // 0x24ecc4: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x24ecc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_24ecc8:
    // 0x24ecc8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x24ecc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24eccc:
    // 0x24eccc: 0x0  nop
    ctx->pc = 0x24ecccu;
    // NOP
label_24ecd0:
    // 0x24ecd0: 0xc0937ea  jal         func_24DFA8
label_24ecd4:
    if (ctx->pc == 0x24ECD4u) {
        ctx->pc = 0x24ECD8u;
        goto label_24ecd8;
    }
    ctx->pc = 0x24ECD0u;
    SET_GPR_U32(ctx, 31, 0x24ECD8u);
    ctx->pc = 0x24DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DFA8u, 0x24ECD0u, 0x24ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECD8u;
label_24ecd8:
    // 0x24ecd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24ecdc:
    // 0x24ecdc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_24ece0:
    if (ctx->pc == 0x24ECE0u) {
        ctx->pc = 0x24ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECDCu;
        // 0x24ece0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECE4u;
        goto label_24ece4;
    }
    ctx->pc = 0x24ECDCu;
    {
        const bool branch_taken_0x24ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECDCu;
        // 0x24ece0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecdc) {
            ctx->pc = 0x24ED28u;
            goto label_24ed28;
        }
    }
    ctx->pc = 0x24ECE4u;
label_24ece4:
    // 0x24ece4: 0xc08d47e  jal         func_2351F8
label_24ece8:
    if (ctx->pc == 0x24ECE8u) {
        ctx->pc = 0x24ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECE4u;
        // 0x24ece8: 0x26a4e720  addiu       $a0, $s5, -0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECECu;
        goto label_24ecec;
    }
    ctx->pc = 0x24ECE4u;
    SET_GPR_U32(ctx, 31, 0x24ECECu);
    ctx->pc = 0x24ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECE4u;
    // 0x24ece8: 0x26a4e720  addiu       $a0, $s5, -0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24ECE4u, 0x24ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ECECu;
label_24ecec:
    // 0x24ecec: 0x1a4000ae  blez        $s2, . + 4 + (0xAE << 2)
label_24ecf0:
    if (ctx->pc == 0x24ECF0u) {
        ctx->pc = 0x24ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECECu;
        // 0x24ecf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ECF4u;
        goto label_24ecf4;
    }
    ctx->pc = 0x24ECECu;
    {
        const bool branch_taken_0x24ecec = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECECu;
        // 0x24ecf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecec) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24ECF4u;
label_24ecf4:
    // 0x24ecf4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x24ecf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ecf8:
    // 0x24ecf8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x24ecf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ecfc:
    // 0x24ecfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24ed00:
    // 0x24ed00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x24ed00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_24ed04:
    // 0x24ed04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24ed08:
    if (ctx->pc == 0x24ED08u) {
        ctx->pc = 0x24ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED04u;
        // 0x24ed08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED0Cu;
        goto label_24ed0c;
    }
    ctx->pc = 0x24ED04u;
    {
        const bool branch_taken_0x24ed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED04u;
        // 0x24ed08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed04) {
            ctx->pc = 0x24ED14u;
            goto label_24ed14;
        }
    }
    ctx->pc = 0x24ED0Cu;
label_24ed0c:
    // 0x24ed0c: 0xc093808  jal         func_24E020
label_24ed10:
    if (ctx->pc == 0x24ED10u) {
        ctx->pc = 0x24ED14u;
        goto label_24ed14;
    }
    ctx->pc = 0x24ED0Cu;
    SET_GPR_U32(ctx, 31, 0x24ED14u);
    ctx->pc = 0x24E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E020u, 0x24ED0Cu, 0x24ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED14u;
label_24ed14:
    // 0x24ed14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x24ed14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_24ed18:
    // 0x24ed18: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_24ed1c:
    if (ctx->pc == 0x24ED1Cu) {
        ctx->pc = 0x24ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED18u;
        // 0x24ed1c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED20u;
        goto label_24ed20;
    }
    ctx->pc = 0x24ED18u;
    {
        const bool branch_taken_0x24ed18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ed18) {
            ctx->pc = 0x24ED1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED18u;
            // 0x24ed1c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ed00;
        }
    }
    ctx->pc = 0x24ED20u;
label_24ed20:
    // 0x24ed20: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_24ed24:
    if (ctx->pc == 0x24ED24u) {
        ctx->pc = 0x24ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED20u;
        // 0x24ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED28u;
        goto label_24ed28;
    }
    ctx->pc = 0x24ED20u;
    {
        const bool branch_taken_0x24ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED20u;
        // 0x24ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed20) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24ED28u;
label_24ed28:
    // 0x24ed28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ed28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24ed2c:
    // 0x24ed2c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x24ed2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24ed30:
    // 0x24ed30: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_24ed34:
    if (ctx->pc == 0x24ED34u) {
        ctx->pc = 0x24ED38u;
        goto label_24ed38;
    }
    ctx->pc = 0x24ED30u;
    {
        const bool branch_taken_0x24ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ed30) {
            ctx->pc = 0x24ECD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ecd0;
        }
    }
    ctx->pc = 0x24ED38u;
label_24ed38:
    // 0x24ed38: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24ed3c:
    // 0x24ed3c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x24ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_24ed40:
    // 0x24ed40: 0x24467518  addiu       $a2, $v0, 0x7518
    ctx->pc = 0x24ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29976));
label_24ed44:
    // 0x24ed44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24ed48:
    // 0x24ed48: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24ed4c:
    // 0x24ed4c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_24ed50:
    if (ctx->pc == 0x24ED50u) {
        ctx->pc = 0x24ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED4Cu;
        // 0x24ed50: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED54u;
        goto label_24ed54;
    }
    ctx->pc = 0x24ED4Cu;
    {
        const bool branch_taken_0x24ed4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x24ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED4Cu;
        // 0x24ed50: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed4c) {
            ctx->pc = 0x24ED64u;
            goto label_24ed64;
        }
    }
    ctx->pc = 0x24ED54u;
label_24ed54:
    // 0x24ed54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ed58:
    // 0x24ed58: 0x8c437500  lw          $v1, 0x7500($v0)
    ctx->pc = 0x24ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29952)));
label_24ed5c:
    // 0x24ed5c: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_24ed60:
    if (ctx->pc == 0x24ED60u) {
        ctx->pc = 0x24ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED5Cu;
        // 0x24ed60: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED64u;
        goto label_24ed64;
    }
    ctx->pc = 0x24ED5Cu;
    {
        const bool branch_taken_0x24ed5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24ed5c) {
            ctx->pc = 0x24ED60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED5Cu;
            // 0x24ed60: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED78u;
            goto label_24ed78;
        }
    }
    ctx->pc = 0x24ED64u;
label_24ed64:
    // 0x24ed64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ed68:
    // 0x24ed68: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_24ed6c:
    // 0x24ed6c: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x24ed6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_24ed70:
    // 0x24ed70: 0x10000005  b           . + 4 + (0x5 << 2)
label_24ed74:
    if (ctx->pc == 0x24ED74u) {
        ctx->pc = 0x24ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED70u;
        // 0x24ed74: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED78u;
        goto label_24ed78;
    }
    ctx->pc = 0x24ED70u;
    {
        const bool branch_taken_0x24ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED70u;
        // 0x24ed74: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed70) {
            ctx->pc = 0x24ED88u;
            goto label_24ed88;
        }
    }
    ctx->pc = 0x24ED78u;
label_24ed78:
    // 0x24ed78: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x24ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_24ed7c:
    // 0x24ed7c: 0xa2630056  sb          $v1, 0x56($s3)
    ctx->pc = 0x24ed7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 3));
label_24ed80:
    // 0x24ed80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x24ed80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_24ed84:
    // 0x24ed84: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x24ed84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_24ed88:
    // 0x24ed88: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
label_24ed8c:
    if (ctx->pc == 0x24ED8Cu) {
        ctx->pc = 0x24ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED88u;
        // 0x24ed8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ED90u;
        goto label_24ed90;
    }
    ctx->pc = 0x24ED88u;
    {
        const bool branch_taken_0x24ed88 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED88u;
        // 0x24ed8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed88) {
            ctx->pc = 0x24EDB8u;
            goto label_24edb8;
        }
    }
    ctx->pc = 0x24ED90u;
label_24ed90:
    // 0x24ed90: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x24ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_24ed94:
    // 0x24ed94: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x24ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_24ed98:
    // 0x24ed98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24ed9c:
    // 0x24ed9c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x24ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_24eda0:
    // 0x24eda0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24eda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24eda4:
    // 0x24eda4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24eda8:
    // 0x24eda8: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x24eda8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24edac:
    // 0x24edac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x24edacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_24edb0:
    // 0x24edb0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_24edb4:
    if (ctx->pc == 0x24EDB4u) {
        ctx->pc = 0x24EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB0u;
        // 0x24edb4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDB8u;
        goto label_24edb8;
    }
    ctx->pc = 0x24EDB0u;
    {
        const bool branch_taken_0x24edb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB0u;
        // 0x24edb4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edb0) {
            ctx->pc = 0x24ED98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ed98;
        }
    }
    ctx->pc = 0x24EDB8u;
label_24edb8:
    // 0x24edb8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x24edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24edbc:
    // 0x24edbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24edbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24edc0:
    // 0x24edc0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24edc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24edc4:
    // 0x24edc4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x24edc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24edc8:
    // 0x24edc8: 0xc091ee6  jal         func_247B98
label_24edcc:
    if (ctx->pc == 0x24EDCCu) {
        ctx->pc = 0x24EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDC8u;
        // 0x24edcc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDD0u;
        goto label_24edd0;
    }
    ctx->pc = 0x24EDC8u;
    SET_GPR_U32(ctx, 31, 0x24EDD0u);
    ctx->pc = 0x24EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDC8u;
    // 0x24edcc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24EDC8u, 0x24EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDD0u;
label_24edd0:
    // 0x24edd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_24edd4:
    if (ctx->pc == 0x24EDD4u) {
        ctx->pc = 0x24EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDD0u;
        // 0x24edd4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDD8u;
        goto label_24edd8;
    }
    ctx->pc = 0x24EDD0u;
    {
        const bool branch_taken_0x24edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDD0u;
        // 0x24edd4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edd0) {
            ctx->pc = 0x24EDF0u;
            goto label_24edf0;
        }
    }
    ctx->pc = 0x24EDD8u;
label_24edd8:
    // 0x24edd8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24eddc:
    // 0x24eddc: 0xc08d47e  jal         func_2351F8
label_24ede0:
    if (ctx->pc == 0x24EDE0u) {
        ctx->pc = 0x24EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDDCu;
        // 0x24ede0: 0x2484e748  addiu       $a0, $a0, -0x18B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDE4u;
        goto label_24ede4;
    }
    ctx->pc = 0x24EDDCu;
    SET_GPR_U32(ctx, 31, 0x24EDE4u);
    ctx->pc = 0x24EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDDCu;
    // 0x24ede0: 0x2484e748  addiu       $a0, $a0, -0x18B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24EDDCu, 0x24EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDE4u;
label_24ede4:
    // 0x24ede4: 0x10000070  b           . + 4 + (0x70 << 2)
label_24ede8:
    if (ctx->pc == 0x24EDE8u) {
        ctx->pc = 0x24EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDE4u;
        // 0x24ede8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDECu;
        goto label_24edec;
    }
    ctx->pc = 0x24EDE4u;
    {
        const bool branch_taken_0x24ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDE4u;
        // 0x24ede8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ede4) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24EDECu;
label_24edec:
    // 0x24edec: 0x0  nop
    ctx->pc = 0x24edecu;
    // NOP
label_24edf0:
    // 0x24edf0: 0x1a400035  blez        $s2, . + 4 + (0x35 << 2)
label_24edf4:
    if (ctx->pc == 0x24EDF4u) {
        ctx->pc = 0x24EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDF0u;
        // 0x24edf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EDF8u;
        goto label_24edf8;
    }
    ctx->pc = 0x24EDF0u;
    {
        const bool branch_taken_0x24edf0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDF0u;
        // 0x24edf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edf0) {
            ctx->pc = 0x24EEC8u;
            goto label_24eec8;
        }
    }
    ctx->pc = 0x24EDF8u;
label_24edf8:
    // 0x24edf8: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x24edf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_24edfc:
    // 0x24edfc: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x24edfcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_24ee00:
    // 0x24ee00: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x24ee00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_24ee04:
    // 0x24ee04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x24ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_24ee08:
    // 0x24ee08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ee08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24ee0c:
    // 0x24ee0c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x24ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_24ee10:
    // 0x24ee10: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_24ee14:
    // 0x24ee14: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x24ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ee18:
    // 0x24ee18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24ee1c:
    // 0x24ee1c: 0xc091c82  jal         func_247208
label_24ee20:
    if (ctx->pc == 0x24EE20u) {
        ctx->pc = 0x24EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE1Cu;
        // 0x24ee20: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE24u;
        goto label_24ee24;
    }
    ctx->pc = 0x24EE1Cu;
    SET_GPR_U32(ctx, 31, 0x24EE24u);
    ctx->pc = 0x24EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE1Cu;
    // 0x24ee20: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247208u, 0x24EE1Cu, 0x24EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE24u;
label_24ee24:
    // 0x24ee24: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x24ee24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24ee28:
    // 0x24ee28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24ee2c:
    // 0x24ee2c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_24ee30:
    if (ctx->pc == 0x24EE30u) {
        ctx->pc = 0x24EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE2Cu;
        // 0x24ee30: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE34u;
        goto label_24ee34;
    }
    ctx->pc = 0x24EE2Cu;
    {
        const bool branch_taken_0x24ee2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE2Cu;
        // 0x24ee30: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee2c) {
            ctx->pc = 0x24EEC0u;
            goto label_24eec0;
        }
    }
    ctx->pc = 0x24EE34u;
label_24ee34:
    // 0x24ee34: 0x26a4e770  addiu       $a0, $s5, -0x1890
    ctx->pc = 0x24ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961008));
label_24ee38:
    // 0x24ee38: 0xc08d47e  jal         func_2351F8
label_24ee3c:
    if (ctx->pc == 0x24EE3Cu) {
        ctx->pc = 0x24EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE38u;
        // 0x24ee3c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE40u;
        goto label_24ee40;
    }
    ctx->pc = 0x24EE38u;
    SET_GPR_U32(ctx, 31, 0x24EE40u);
    ctx->pc = 0x24EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE38u;
    // 0x24ee3c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24EE38u, 0x24EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE40u;
label_24ee40:
    // 0x24ee40: 0x1a400059  blez        $s2, . + 4 + (0x59 << 2)
label_24ee44:
    if (ctx->pc == 0x24EE44u) {
        ctx->pc = 0x24EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE40u;
        // 0x24ee44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE48u;
        goto label_24ee48;
    }
    ctx->pc = 0x24EE40u;
    {
        const bool branch_taken_0x24ee40 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE40u;
        // 0x24ee44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee40) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24EE48u;
label_24ee48:
    // 0x24ee48: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x24ee48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ee4c:
    // 0x24ee4c: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x24ee4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_24ee50:
    // 0x24ee50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24ee54:
    // 0x24ee54: 0x0  nop
    ctx->pc = 0x24ee54u;
    // NOP
label_24ee58:
    // 0x24ee58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24ee58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24ee5c:
    // 0x24ee5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24ee60:
    if (ctx->pc == 0x24EE60u) {
        ctx->pc = 0x24EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE5Cu;
        // 0x24ee60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE64u;
        goto label_24ee64;
    }
    ctx->pc = 0x24EE5Cu;
    {
        const bool branch_taken_0x24ee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE5Cu;
        // 0x24ee60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee5c) {
            ctx->pc = 0x24EE6Cu;
            goto label_24ee6c;
        }
    }
    ctx->pc = 0x24EE64u;
label_24ee64:
    // 0x24ee64: 0xc091cbe  jal         func_2472F8
label_24ee68:
    if (ctx->pc == 0x24EE68u) {
        ctx->pc = 0x24EE6Cu;
        goto label_24ee6c;
    }
    ctx->pc = 0x24EE64u;
    SET_GPR_U32(ctx, 31, 0x24EE6Cu);
    ctx->pc = 0x2472F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472F8u, 0x24EE64u, 0x24EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE6Cu;
label_24ee6c:
    // 0x24ee6c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x24ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_24ee70:
    // 0x24ee70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24ee74:
    if (ctx->pc == 0x24EE74u) {
        ctx->pc = 0x24EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE70u;
        // 0x24ee74: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE78u;
        goto label_24ee78;
    }
    ctx->pc = 0x24EE70u;
    {
        const bool branch_taken_0x24ee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE70u;
        // 0x24ee74: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee70) {
            ctx->pc = 0x24EE90u;
            goto label_24ee90;
        }
    }
    ctx->pc = 0x24EE78u;
label_24ee78:
    // 0x24ee78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ee78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24ee7c:
    // 0x24ee7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ee7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ee80:
    // 0x24ee80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24ee80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ee84:
    // 0x24ee84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24ee84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ee88:
    // 0x24ee88: 0xc091ee6  jal         func_247B98
label_24ee8c:
    if (ctx->pc == 0x24EE8Cu) {
        ctx->pc = 0x24EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE88u;
        // 0x24ee8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE90u;
        goto label_24ee90;
    }
    ctx->pc = 0x24EE88u;
    SET_GPR_U32(ctx, 31, 0x24EE90u);
    ctx->pc = 0x24EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE88u;
    // 0x24ee8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24EE88u, 0x24EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE90u;
label_24ee90:
    // 0x24ee90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24ee94:
    // 0x24ee94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_24ee98:
    if (ctx->pc == 0x24EE98u) {
        ctx->pc = 0x24EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE94u;
        // 0x24ee98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EE9Cu;
        goto label_24ee9c;
    }
    ctx->pc = 0x24EE94u;
    {
        const bool branch_taken_0x24ee94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE94u;
        // 0x24ee98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee94) {
            ctx->pc = 0x24EEA4u;
            goto label_24eea4;
        }
    }
    ctx->pc = 0x24EE9Cu;
label_24ee9c:
    // 0x24ee9c: 0xc093808  jal         func_24E020
label_24eea0:
    if (ctx->pc == 0x24EEA0u) {
        ctx->pc = 0x24EEA4u;
        goto label_24eea4;
    }
    ctx->pc = 0x24EE9Cu;
    SET_GPR_U32(ctx, 31, 0x24EEA4u);
    ctx->pc = 0x24E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E020u, 0x24EE9Cu, 0x24EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EEA4u;
label_24eea4:
    // 0x24eea4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24eea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24eea8:
    // 0x24eea8: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x24eea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24eeac:
    // 0x24eeac: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_24eeb0:
    if (ctx->pc == 0x24EEB0u) {
        ctx->pc = 0x24EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEACu;
        // 0x24eeb0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEB4u;
        goto label_24eeb4;
    }
    ctx->pc = 0x24EEACu;
    {
        const bool branch_taken_0x24eeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eeac) {
            ctx->pc = 0x24EEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EEACu;
            // 0x24eeb0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ee58;
        }
    }
    ctx->pc = 0x24EEB4u;
label_24eeb4:
    // 0x24eeb4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_24eeb8:
    if (ctx->pc == 0x24EEB8u) {
        ctx->pc = 0x24EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEB4u;
        // 0x24eeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEBCu;
        goto label_24eebc;
    }
    ctx->pc = 0x24EEB4u;
    {
        const bool branch_taken_0x24eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEB4u;
        // 0x24eeb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eeb4) {
            ctx->pc = 0x24EFA8u;
            goto label_24efa8;
        }
    }
    ctx->pc = 0x24EEBCu;
label_24eebc:
    // 0x24eebc: 0x0  nop
    ctx->pc = 0x24eebcu;
    // NOP
label_24eec0:
    // 0x24eec0: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_24eec4:
    if (ctx->pc == 0x24EEC4u) {
        ctx->pc = 0x24EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEC0u;
        // 0x24eec4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEC8u;
        goto label_24eec8;
    }
    ctx->pc = 0x24EEC0u;
    {
        const bool branch_taken_0x24eec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEC0u;
        // 0x24eec4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eec0) {
            ctx->pc = 0x24EE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ee08;
        }
    }
    ctx->pc = 0x24EEC8u;
label_24eec8:
    // 0x24eec8: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_24eecc:
    if (ctx->pc == 0x24EECCu) {
        ctx->pc = 0x24EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEC8u;
        // 0x24eecc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EED0u;
        goto label_24eed0;
    }
    ctx->pc = 0x24EEC8u;
    {
        const bool branch_taken_0x24eec8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEC8u;
        // 0x24eecc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eec8) {
            ctx->pc = 0x24EEF4u;
            goto label_24eef4;
        }
    }
    ctx->pc = 0x24EED0u;
label_24eed0:
    // 0x24eed0: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x24eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_24eed4:
    // 0x24eed4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24eed8:
    // 0x24eed8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24eedc:
    // 0x24eedc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_24eee0:
    // 0x24eee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24eee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24eee4:
    // 0x24eee4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x24eee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_24eee8:
    // 0x24eee8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_24eeec:
    // 0x24eeec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_24eef0:
    if (ctx->pc == 0x24EEF0u) {
        ctx->pc = 0x24EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEECu;
        // 0x24eef0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EEF4u;
        goto label_24eef4;
    }
    ctx->pc = 0x24EEECu;
    {
        const bool branch_taken_0x24eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEECu;
        // 0x24eef0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eeec) {
            ctx->pc = 0x24EED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24eed8;
        }
    }
    ctx->pc = 0x24EEF4u;
label_24eef4:
    // 0x24eef4: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x24eef4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_24eef8:
    // 0x24eef8: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x24eef8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_24eefc:
    // 0x24eefc: 0xa2720052  sb          $s2, 0x52($s3)
    ctx->pc = 0x24eefcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 18));
label_24ef00:
    // 0x24ef00: 0xa2720053  sb          $s2, 0x53($s3)
    ctx->pc = 0x24ef00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 18));
label_24ef04:
    // 0x24ef04: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x24ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_24ef08:
    // 0x24ef08: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x24ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_24ef0c:
    // 0x24ef0c: 0xa2600054  sb          $zero, 0x54($s3)
    ctx->pc = 0x24ef0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 0));
label_24ef10:
    // 0x24ef10: 0xa2600055  sb          $zero, 0x55($s3)
    ctx->pc = 0x24ef10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 0));
label_24ef14:
    // 0x24ef14: 0xa260005b  sb          $zero, 0x5B($s3)
    ctx->pc = 0x24ef14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
label_24ef18:
    // 0x24ef18: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_24ef1c:
    if (ctx->pc == 0x24EF1Cu) {
        ctx->pc = 0x24EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF18u;
        // 0x24ef1c: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF20u;
        goto label_24ef20;
    }
    ctx->pc = 0x24EF18u;
    {
        const bool branch_taken_0x24ef18 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF18u;
        // 0x24ef1c: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef18) {
            ctx->pc = 0x24EF4Cu;
            goto label_24ef4c;
        }
    }
    ctx->pc = 0x24EF20u;
label_24ef20:
    // 0x24ef20: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x24ef20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ef24:
    // 0x24ef24: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x24ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_24ef28:
    // 0x24ef28: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x24ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24ef2c:
    // 0x24ef2c: 0x0  nop
    ctx->pc = 0x24ef2cu;
    // NOP
label_24ef30:
    // 0x24ef30: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x24ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_24ef34:
    // 0x24ef34: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x24ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_24ef38:
    // 0x24ef38: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24ef38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24ef3c:
    // 0x24ef3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24ef40:
    // 0x24ef40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_24ef44:
    // 0x24ef44: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_24ef48:
    if (ctx->pc == 0x24EF48u) {
        ctx->pc = 0x24EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF44u;
        // 0x24ef48: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF4Cu;
        goto label_24ef4c;
    }
    ctx->pc = 0x24EF44u;
    {
        const bool branch_taken_0x24ef44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF44u;
        // 0x24ef48: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef44) {
            ctx->pc = 0x24EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ef30;
        }
    }
    ctx->pc = 0x24EF4Cu;
label_24ef4c:
    // 0x24ef4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24ef4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ef50:
    // 0x24ef50: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x24ef50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_24ef54:
    // 0x24ef54: 0xa2710059  sb          $s1, 0x59($s3)
    ctx->pc = 0x24ef54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 17));
label_24ef58:
    // 0x24ef58: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x24ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_24ef5c:
    // 0x24ef5c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x24ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24ef60:
    // 0x24ef60: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x24ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_24ef64:
    // 0x24ef64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24ef68:
    // 0x24ef68: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x24ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_24ef6c:
    // 0x24ef6c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24ef70:
    // 0x24ef70: 0x40f809  jalr        $v0
label_24ef74:
    if (ctx->pc == 0x24EF74u) {
        ctx->pc = 0x24EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF70u;
        // 0x24ef74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF78u;
        goto label_24ef78;
    }
    ctx->pc = 0x24EF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24EF78u);
        ctx->pc = 0x24EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF70u;
        // 0x24ef74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EF70u, 0x24EF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EF78u;
label_24ef78:
    // 0x24ef78: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x24ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24ef7c:
    // 0x24ef7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ef7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ef80:
    // 0x24ef80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24ef84:
    // 0x24ef84: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24ef88:
    // 0x24ef88: 0x40f809  jalr        $v0
label_24ef8c:
    if (ctx->pc == 0x24EF8Cu) {
        ctx->pc = 0x24EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF88u;
        // 0x24ef8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EF90u;
        goto label_24ef90;
    }
    ctx->pc = 0x24EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24EF90u);
        ctx->pc = 0x24EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF88u;
        // 0x24ef8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EF88u, 0x24EF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EF90u;
label_24ef90:
    // 0x24ef90: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x24ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_24ef94:
    // 0x24ef94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24ef94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24ef98:
    // 0x24ef98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24ef98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ef9c:
    // 0x24ef9c: 0xae700028  sw          $s0, 0x28($s3)
    ctx->pc = 0x24ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
label_24efa0:
    // 0x24efa0: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x24efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_24efa4:
    // 0x24efa4: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x24efa4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_24efa8:
    // 0x24efa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24efa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24efac:
    // 0x24efac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x24efacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24efb0:
    // 0x24efb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24efb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24efb4:
    // 0x24efb4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x24efb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_24efb8:
    // 0x24efb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24efb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24efbc:
    // 0x24efbc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x24efbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_24efc0:
    // 0x24efc0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x24efc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24efc4:
    // 0x24efc4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x24efc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_24efc8:
    // 0x24efc8: 0x3e00008  jr          $ra
label_24efcc:
    if (ctx->pc == 0x24EFCCu) {
        ctx->pc = 0x24EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFC8u;
        // 0x24efcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EFD0u;
        goto label_fallthrough_0x24efc8;
    }
    ctx->pc = 0x24EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EFC8u;
        // 0x24efcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24efc8:
    ctx->pc = 0x24EFD0u;
}

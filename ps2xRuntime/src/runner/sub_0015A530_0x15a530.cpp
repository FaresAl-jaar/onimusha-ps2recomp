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

// Function: sub_0015A530
// Address: 0x15a530 - 0x15a6a4
void sub_0015A530_0x15a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A530_0x15a530");
#endif

    switch (ctx->pc) {
        case 0x15a5b0u: goto label_15a5b0;
        case 0x15a608u: goto label_15a608;
        case 0x15a680u: goto label_15a680;
        case 0x15a688u: goto label_15a688;
        default: break;
    }

    ctx->pc = 0x15a530u;

    // 0x15a530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a540: 0xa0801a07  sb          $zero, 0x1A07($a0)
    ctx->pc = 0x15a540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6663), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a548: 0xa0801a06  sb          $zero, 0x1A06($a0)
    ctx->pc = 0x15a548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6662), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a54c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x15a54cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a550: 0xa0801a05  sb          $zero, 0x1A05($a0)
    ctx->pc = 0x15a550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6661), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a554: 0xa0801a04  sb          $zero, 0x1A04($a0)
    ctx->pc = 0x15a554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6660), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a558: 0xa0801a01  sb          $zero, 0x1A01($a0)
    ctx->pc = 0x15a558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6657), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a55c: 0xa0801a44  sb          $zero, 0x1A44($a0)
    ctx->pc = 0x15a55cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6724), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a560: 0xa0801a43  sb          $zero, 0x1A43($a0)
    ctx->pc = 0x15a560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6723), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a564: 0xa0801a46  sb          $zero, 0x1A46($a0)
    ctx->pc = 0x15a564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6726), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a568: 0xa0801a45  sb          $zero, 0x1A45($a0)
    ctx->pc = 0x15a568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6725), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a56c: 0xac801bf0  sw          $zero, 0x1BF0($a0)
    ctx->pc = 0x15a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7152), GPR_U32(ctx, 0));
    // 0x15a570: 0xac801c10  sw          $zero, 0x1C10($a0)
    ctx->pc = 0x15a570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7184), GPR_U32(ctx, 0));
    // 0x15a574: 0xac801bf4  sw          $zero, 0x1BF4($a0)
    ctx->pc = 0x15a574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7156), GPR_U32(ctx, 0));
    // 0x15a578: 0xac801c14  sw          $zero, 0x1C14($a0)
    ctx->pc = 0x15a578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7188), GPR_U32(ctx, 0));
    // 0x15a57c: 0xac801bf8  sw          $zero, 0x1BF8($a0)
    ctx->pc = 0x15a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7160), GPR_U32(ctx, 0));
    // 0x15a580: 0xac801c18  sw          $zero, 0x1C18($a0)
    ctx->pc = 0x15a580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7192), GPR_U32(ctx, 0));
    // 0x15a584: 0xac801bfc  sw          $zero, 0x1BFC($a0)
    ctx->pc = 0x15a584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7164), GPR_U32(ctx, 0));
    // 0x15a588: 0xac801c1c  sw          $zero, 0x1C1C($a0)
    ctx->pc = 0x15a588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7196), GPR_U32(ctx, 0));
    // 0x15a58c: 0xac801c00  sw          $zero, 0x1C00($a0)
    ctx->pc = 0x15a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7168), GPR_U32(ctx, 0));
    // 0x15a590: 0xac801c20  sw          $zero, 0x1C20($a0)
    ctx->pc = 0x15a590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7200), GPR_U32(ctx, 0));
    // 0x15a594: 0xac801c04  sw          $zero, 0x1C04($a0)
    ctx->pc = 0x15a594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7172), GPR_U32(ctx, 0));
    // 0x15a598: 0xac801c24  sw          $zero, 0x1C24($a0)
    ctx->pc = 0x15a598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7204), GPR_U32(ctx, 0));
    // 0x15a59c: 0xac801c08  sw          $zero, 0x1C08($a0)
    ctx->pc = 0x15a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7176), GPR_U32(ctx, 0));
    // 0x15a5a0: 0xac801c28  sw          $zero, 0x1C28($a0)
    ctx->pc = 0x15a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7208), GPR_U32(ctx, 0));
    // 0x15a5a4: 0xac801c0c  sw          $zero, 0x1C0C($a0)
    ctx->pc = 0x15a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7180), GPR_U32(ctx, 0));
    // 0x15a5a8: 0xac801c2c  sw          $zero, 0x1C2C($a0)
    ctx->pc = 0x15a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7212), GPR_U32(ctx, 0));
    // 0x15a5ac: 0x0  nop
    ctx->pc = 0x15a5acu;
    // NOP
label_15a5b0:
    // 0x15a5b0: 0xac601b70  sw          $zero, 0x1B70($v1)
    ctx->pc = 0x15a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7024), GPR_U32(ctx, 0));
    // 0x15a5b4: 0xac601b74  sw          $zero, 0x1B74($v1)
    ctx->pc = 0x15a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7028), GPR_U32(ctx, 0));
    // 0x15a5b8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15a5bc: 0xac601b78  sw          $zero, 0x1B78($v1)
    ctx->pc = 0x15a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7032), GPR_U32(ctx, 0));
    // 0x15a5c0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x15a5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x15a5c4: 0xac601b7c  sw          $zero, 0x1B7C($v1)
    ctx->pc = 0x15a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7036), GPR_U32(ctx, 0));
    // 0x15a5c8: 0xac601b80  sw          $zero, 0x1B80($v1)
    ctx->pc = 0x15a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7040), GPR_U32(ctx, 0));
    // 0x15a5cc: 0xac601b84  sw          $zero, 0x1B84($v1)
    ctx->pc = 0x15a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7044), GPR_U32(ctx, 0));
    // 0x15a5d0: 0xac601b88  sw          $zero, 0x1B88($v1)
    ctx->pc = 0x15a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7048), GPR_U32(ctx, 0));
    // 0x15a5d4: 0xac601b8c  sw          $zero, 0x1B8C($v1)
    ctx->pc = 0x15a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7052), GPR_U32(ctx, 0));
    // 0x15a5d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x15A5D8u;
    {
        const bool branch_taken_0x15a5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5D8u;
        // 0x15a5dc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5d8) {
            ctx->pc = 0x15A5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a5b0;
        }
    }
    ctx->pc = 0x15A5E0u;
    // 0x15a5e0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15a5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a5e8: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x15a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095B4u));
    // 0x15a5ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5f4: 0xae031a38  sw          $v1, 0x1A38($s0)
    ctx->pc = 0x15a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6712), GPR_U32(ctx, 3));
    // 0x15a5f8: 0xae031b70  sw          $v1, 0x1B70($s0)
    ctx->pc = 0x15a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7024), GPR_U32(ctx, 3));
    // 0x15a5fc: 0xa2021a42  sb          $v0, 0x1A42($s0)
    ctx->pc = 0x15a5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6722), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a600: 0xae001a50  sw          $zero, 0x1A50($s0)
    ctx->pc = 0x15a600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6736), GPR_U32(ctx, 0));
    // 0x15a604: 0xae001a60  sw          $zero, 0x1A60($s0)
    ctx->pc = 0x15a604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6752), GPR_U32(ctx, 0));
label_15a608:
    // 0x15a608: 0xa0a01c30  sb          $zero, 0x1C30($a1)
    ctx->pc = 0x15a608u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7216), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a60c: 0xa0a01c31  sb          $zero, 0x1C31($a1)
    ctx->pc = 0x15a60cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7217), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a610: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15a614: 0xa4a01c32  sh          $zero, 0x1C32($a1)
    ctx->pc = 0x15a614u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7218), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a618: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x15a618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x15a61c: 0xa0a01c34  sb          $zero, 0x1C34($a1)
    ctx->pc = 0x15a61cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7220), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a620: 0xa0a01c35  sb          $zero, 0x1C35($a1)
    ctx->pc = 0x15a620u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7221), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a624: 0xa4a01c36  sh          $zero, 0x1C36($a1)
    ctx->pc = 0x15a624u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7222), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a628: 0xa0a01c38  sb          $zero, 0x1C38($a1)
    ctx->pc = 0x15a628u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7224), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a62c: 0xa0a01c39  sb          $zero, 0x1C39($a1)
    ctx->pc = 0x15a62cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7225), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a630: 0xa4a01c3a  sh          $zero, 0x1C3A($a1)
    ctx->pc = 0x15a630u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7226), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a634: 0xa0a01c3c  sb          $zero, 0x1C3C($a1)
    ctx->pc = 0x15a634u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7228), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a638: 0xa0a01c3d  sb          $zero, 0x1C3D($a1)
    ctx->pc = 0x15a638u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7229), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a63c: 0xa4a01c3e  sh          $zero, 0x1C3E($a1)
    ctx->pc = 0x15a63cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7230), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a640: 0xa0a01c40  sb          $zero, 0x1C40($a1)
    ctx->pc = 0x15a640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7232), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a644: 0xa0a01c41  sb          $zero, 0x1C41($a1)
    ctx->pc = 0x15a644u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7233), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a648: 0xa4a01c42  sh          $zero, 0x1C42($a1)
    ctx->pc = 0x15a648u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7234), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a64c: 0xa0a01c44  sb          $zero, 0x1C44($a1)
    ctx->pc = 0x15a64cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7236), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a650: 0xa0a01c45  sb          $zero, 0x1C45($a1)
    ctx->pc = 0x15a650u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7237), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a654: 0xa4a01c46  sh          $zero, 0x1C46($a1)
    ctx->pc = 0x15a654u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7238), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a658: 0xa0a01c48  sb          $zero, 0x1C48($a1)
    ctx->pc = 0x15a658u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7240), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a65c: 0xa0a01c49  sb          $zero, 0x1C49($a1)
    ctx->pc = 0x15a65cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7241), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a660: 0xa4a01c4a  sh          $zero, 0x1C4A($a1)
    ctx->pc = 0x15a660u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7242), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a664: 0xa0a01c4c  sb          $zero, 0x1C4C($a1)
    ctx->pc = 0x15a664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7244), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a668: 0xa0a01c4d  sb          $zero, 0x1C4D($a1)
    ctx->pc = 0x15a668u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7245), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a66c: 0xa4a01c4e  sh          $zero, 0x1C4E($a1)
    ctx->pc = 0x15a66cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7246), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a670: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x15A670u;
    {
        const bool branch_taken_0x15a670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A670u;
        // 0x15a674: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a670) {
            ctx->pc = 0x15A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a608;
        }
    }
    ctx->pc = 0x15A678u;
    // 0x15a678: 0xc0569ac  jal         func_15A6B0
    ctx->pc = 0x15A678u;
    SET_GPR_U32(ctx, 31, 0x15A680u);
    ctx->pc = 0x15A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A678u;
    // 0x15a67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A6B0u, 0x15A678u, 0x15A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A680u;
label_15a680:
    // 0x15a680: 0xc069138  jal         func_1A44E0
    ctx->pc = 0x15A680u;
    SET_GPR_U32(ctx, 31, 0x15A688u);
    ctx->pc = 0x15A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A680u;
    // 0x15a684: 0x278487c0  addiu       $a0, $gp, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A44E0u, 0x15A680u, 0x15A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A688u;
label_15a688:
    // 0x15a688: 0x92031a04  lbu         $v1, 0x1A04($s0)
    ctx->pc = 0x15a688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6660)));
    // 0x15a68c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15a690: 0xa2031a04  sb          $v1, 0x1A04($s0)
    ctx->pc = 0x15a690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6660), (uint8_t)GPR_U32(ctx, 3));
    // 0x15a694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A69Cu;
        // 0x15a6a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A6A4u;
}

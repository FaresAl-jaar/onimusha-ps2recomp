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

// Function: sub_0033EF80
// Address: 0x33ef80 - 0x33f25c
void sub_0033EF80_0x33ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EF80_0x33ef80");
#endif

    switch (ctx->pc) {
        case 0x33efd4u: goto label_33efd4;
        case 0x33efe0u: goto label_33efe0;
        case 0x33efecu: goto label_33efec;
        case 0x33f094u: goto label_33f094;
        case 0x33f0a0u: goto label_33f0a0;
        case 0x33f0acu: goto label_33f0ac;
        case 0x33f0b8u: goto label_33f0b8;
        case 0x33f114u: goto label_33f114;
        case 0x33f174u: goto label_33f174;
        case 0x33f1b4u: goto label_33f1b4;
        case 0x33f214u: goto label_33f214;
        default: break;
    }

    ctx->pc = 0x33ef80u;

    // 0x33ef80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ef84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33ef88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ef8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ef90: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x33ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x33ef94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33EF94u;
    {
        const bool branch_taken_0x33ef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF94u;
        // 0x33ef98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef94) {
            ctx->pc = 0x33EFB0u;
            goto label_33efb0;
        }
    }
    ctx->pc = 0x33EF9Cu;
    // 0x33ef9c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x33ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x33efa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33efa4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x33efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x33efa8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x33EFA8u;
    {
        const bool branch_taken_0x33efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFA8u;
        // 0x33efac: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33efa8) {
            ctx->pc = 0x33F248u;
            goto label_33f248;
        }
    }
    ctx->pc = 0x33EFB0u;
label_33efb0:
    // 0x33efb0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33efb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33efb8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x33efb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x33efbc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33EFBCu;
    {
        const bool branch_taken_0x33efbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33efbc) {
            ctx->pc = 0x33F010u;
            goto label_33f010;
        }
    }
    ctx->pc = 0x33EFC4u;
    // 0x33efc4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x33efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x33efc8: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33efcc: 0xc0c815c  jal         func_320570
    ctx->pc = 0x33EFCCu;
    SET_GPR_U32(ctx, 31, 0x33EFD4u);
    ctx->pc = 0x33EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EFCCu;
    // 0x33efd0: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320570u, 0x33EFCCu, 0x33EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EFD4u;
label_33efd4:
    // 0x33efd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33efd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33efd8: 0xc0cfac0  jal         func_33EB00
    ctx->pc = 0x33EFD8u;
    SET_GPR_U32(ctx, 31, 0x33EFE0u);
    ctx->pc = 0x33EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EFD8u;
    // 0x33efdc: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB00u, 0x33EFD8u, 0x33EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EFE0u;
label_33efe0:
    // 0x33efe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33efe4: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33EFE4u;
    SET_GPR_U32(ctx, 31, 0x33EFECu);
    ctx->pc = 0x33EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EFE4u;
    // 0x33efe8: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33EFE4u, 0x33EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EFECu;
label_33efec:
    // 0x33efec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33EFECu;
    {
        const bool branch_taken_0x33efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33efec) {
            ctx->pc = 0x33F008u;
            goto label_33f008;
        }
    }
    ctx->pc = 0x33EFF4u;
    // 0x33eff4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x33eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x33eff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33effc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x33EFFCu;
    {
        const bool branch_taken_0x33effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFFCu;
        // 0x33f000: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33effc) {
            ctx->pc = 0x33F248u;
            goto label_33f248;
        }
    }
    ctx->pc = 0x33F004u;
    // 0x33f004: 0x0  nop
    ctx->pc = 0x33f004u;
    // NOP
label_33f008:
    // 0x33f008: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x33F008u;
    {
        const bool branch_taken_0x33f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F008u;
        // 0x33f00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f008) {
            ctx->pc = 0x33F248u;
            goto label_33f248;
        }
    }
    ctx->pc = 0x33F010u;
label_33f010:
    // 0x33f010: 0x3c010090  lui         $at, 0x90
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)144 << 16));
    // 0x33f014: 0x90224a9c  lbu         $v0, 0x4A9C($at)
    ctx->pc = 0x33f014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x904A9Cu));
    // 0x33f018: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x33F018u;
    {
        const bool branch_taken_0x33f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f018) {
            ctx->pc = 0x33F088u;
            goto label_33f088;
        }
    }
    ctx->pc = 0x33F020u;
    // 0x33f020: 0x92250030  lbu         $a1, 0x30($s1)
    ctx->pc = 0x33f020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x33f024: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x33f024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x33f028: 0x92240031  lbu         $a0, 0x31($s1)
    ctx->pc = 0x33f028u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x33f02c: 0x92230032  lbu         $v1, 0x32($s1)
    ctx->pc = 0x33f02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x33f030: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x33f030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x33f034: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x33f034u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x33f038: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x33f038u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f03c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x33f03cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f040: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x33f040u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f044: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x33f044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33f048: 0xa2220030  sb          $v0, 0x30($s1)
    ctx->pc = 0x33f048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f04c: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x33f04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x33f050: 0xa2220031  sb          $v0, 0x31($s1)
    ctx->pc = 0x33f050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f054: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x33f054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x33f058: 0xa2220032  sb          $v0, 0x32($s1)
    ctx->pc = 0x33f058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f05c: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x33f05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x33f060: 0xa2220033  sb          $v0, 0x33($s1)
    ctx->pc = 0x33f060u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f064: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x33f064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f068: 0xa2220034  sb          $v0, 0x34($s1)
    ctx->pc = 0x33f068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f06c: 0x93a20039  lbu         $v0, 0x39($sp)
    ctx->pc = 0x33f06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
    // 0x33f070: 0xa2220035  sb          $v0, 0x35($s1)
    ctx->pc = 0x33f070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f074: 0x93a2003a  lbu         $v0, 0x3A($sp)
    ctx->pc = 0x33f074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 58)));
    // 0x33f078: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x33f078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f07c: 0x93a2003b  lbu         $v0, 0x3B($sp)
    ctx->pc = 0x33f07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
    // 0x33f080: 0xa2220037  sb          $v0, 0x37($s1)
    ctx->pc = 0x33f080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x33f084: 0x0  nop
    ctx->pc = 0x33f084u;
    // NOP
label_33f088:
    // 0x33f088: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x33f088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33f08c: 0xc0c8198  jal         func_320660
    ctx->pc = 0x33F08Cu;
    SET_GPR_U32(ctx, 31, 0x33F094u);
    ctx->pc = 0x33F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F08Cu;
    // 0x33f090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320660u, 0x33F08Cu, 0x33F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F094u;
label_33f094:
    // 0x33f094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33f094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f098: 0xc0cfac0  jal         func_33EB00
    ctx->pc = 0x33F098u;
    SET_GPR_U32(ctx, 31, 0x33F0A0u);
    ctx->pc = 0x33F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F098u;
    // 0x33f09c: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB00u, 0x33F098u, 0x33F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0A0u;
label_33f0a0:
    // 0x33f0a0: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x33f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33f0a4: 0xc0c8198  jal         func_320660
    ctx->pc = 0x33F0A4u;
    SET_GPR_U32(ctx, 31, 0x33F0ACu);
    ctx->pc = 0x33F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0A4u;
    // 0x33f0a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320660u, 0x33F0A4u, 0x33F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0ACu;
label_33f0ac:
    // 0x33f0ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33f0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0b0: 0xc0cfac0  jal         func_33EB00
    ctx->pc = 0x33F0B0u;
    SET_GPR_U32(ctx, 31, 0x33F0B8u);
    ctx->pc = 0x33F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0B0u;
    // 0x33f0b4: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB00u, 0x33F0B0u, 0x33F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0B8u;
label_33f0b8:
    // 0x33f0b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x33f0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x33f0bc: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x33f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x33f0c0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x33f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x33f0c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F0C4u;
    {
        const bool branch_taken_0x33f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0C4u;
        // 0x33f0c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0c4) {
            ctx->pc = 0x33F0D4u;
            goto label_33f0d4;
        }
    }
    ctx->pc = 0x33F0CCu;
    // 0x33f0cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33F0CCu;
    {
        const bool branch_taken_0x33f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0CCu;
        // 0x33f0d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0cc) {
            ctx->pc = 0x33F0DCu;
            goto label_33f0dc;
        }
    }
    ctx->pc = 0x33F0D4u;
label_33f0d4:
    // 0x33f0d4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x33f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33f0d8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x33f0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_33f0dc:
    // 0x33f0dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33f0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33f0e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f0e4: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x33F0E4u;
    {
        const bool branch_taken_0x33f0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33f0e4) {
            ctx->pc = 0x33F1A8u;
            goto label_33f1a8;
        }
    }
    ctx->pc = 0x33F0ECu;
    // 0x33f0ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f0f0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33F0F0u;
    {
        const bool branch_taken_0x33f0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0F0u;
        // 0x33f0f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0f0) {
            ctx->pc = 0x33F148u;
            goto label_33f148;
        }
    }
    ctx->pc = 0x33F0F8u;
    // 0x33f0f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F0F8u;
    {
        const bool branch_taken_0x33f0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33f0f8) {
            ctx->pc = 0x33F108u;
            goto label_33f108;
        }
    }
    ctx->pc = 0x33F100u;
    // 0x33f100: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x33F100u;
    {
        const bool branch_taken_0x33f100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f100) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F108u;
label_33f108:
    // 0x33f108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f10c: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F10Cu;
    SET_GPR_U32(ctx, 31, 0x33F114u);
    ctx->pc = 0x33F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F10Cu;
    // 0x33f110: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F10Cu, 0x33F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F114u;
label_33f114:
    // 0x33f114: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x33F114u;
    {
        const bool branch_taken_0x33f114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F114u;
        // 0x33f118: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f114) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F11Cu;
    // 0x33f11c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f120: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x33f124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f12c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f130: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x33F130u;
    {
        const bool branch_taken_0x33f130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F130u;
        // 0x33f134: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f130) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F138u;
    // 0x33f138: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33f138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33f13c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x33F13Cu;
    {
        const bool branch_taken_0x33f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F13Cu;
        // 0x33f140: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f13c) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F144u;
    // 0x33f144: 0x0  nop
    ctx->pc = 0x33f144u;
    // NOP
label_33f148:
    // 0x33f148: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f14c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f150: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f154: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33f154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33f158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f15c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f164: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x33F164u;
    {
        const bool branch_taken_0x33f164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F164u;
        // 0x33f168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f164) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F16Cu;
    // 0x33f16c: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F16Cu;
    SET_GPR_U32(ctx, 31, 0x33F174u);
    ctx->pc = 0x33F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F16Cu;
    // 0x33f170: 0x26250034  addiu       $a1, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F16Cu, 0x33F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F174u;
label_33f174:
    // 0x33f174: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x33F174u;
    {
        const bool branch_taken_0x33f174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F174u;
        // 0x33f178: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f174) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F17Cu;
    // 0x33f17c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f180: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x33f184: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x33f184u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33f188: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33f188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33f18c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f194: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f198: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33f19c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33F19Cu;
    {
        const bool branch_taken_0x33f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F19Cu;
        // 0x33f1a0: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f19c) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F1A4u;
    // 0x33f1a4: 0x0  nop
    ctx->pc = 0x33f1a4u;
    // NOP
label_33f1a8:
    // 0x33f1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1ac: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F1ACu;
    SET_GPR_U32(ctx, 31, 0x33F1B4u);
    ctx->pc = 0x33F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F1ACu;
    // 0x33f1b0: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F1ACu, 0x33F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F1B4u;
label_33f1b4:
    // 0x33f1b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F1B4u;
    {
        const bool branch_taken_0x33f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1B4u;
        // 0x33f1b8: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1b4) {
            ctx->pc = 0x33F1E8u;
            goto label_33f1e8;
        }
    }
    ctx->pc = 0x33F1BCu;
    // 0x33f1bc: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f1c0: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x33f1c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f1c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f1cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f1d0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x33F1D0u;
    {
        const bool branch_taken_0x33f1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1D0u;
        // 0x33f1d4: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1d0) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F1D8u;
    // 0x33f1d8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33f1dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33F1DCu;
    {
        const bool branch_taken_0x33f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1DCu;
        // 0x33f1e0: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1dc) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F1E4u;
    // 0x33f1e4: 0x0  nop
    ctx->pc = 0x33f1e4u;
    // NOP
label_33f1e8:
    // 0x33f1e8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f1ec: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f1f0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f1f4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33f1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33f1f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f204: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33F204u;
    {
        const bool branch_taken_0x33f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F204u;
        // 0x33f208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f204) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F20Cu;
    // 0x33f20c: 0xc0cfad8  jal         func_33EB60
    ctx->pc = 0x33F20Cu;
    SET_GPR_U32(ctx, 31, 0x33F214u);
    ctx->pc = 0x33F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F20Cu;
    // 0x33f210: 0x26250034  addiu       $a1, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB60u, 0x33F20Cu, 0x33F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F214u;
label_33f214:
    // 0x33f214: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33F214u;
    {
        const bool branch_taken_0x33f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F214u;
        // 0x33f218: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f214) {
            ctx->pc = 0x33F240u;
            goto label_33f240;
        }
    }
    ctx->pc = 0x33F21Cu;
    // 0x33f21c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f220: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x33f224: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x33f224u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33f228: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33f228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33f22c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f238: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33f23c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x33f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_33f240:
    // 0x33f240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33f240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f244: 0x0  nop
    ctx->pc = 0x33f244u;
    // NOP
label_33f248:
    // 0x33f248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33f248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33f24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f254: 0x3e00008  jr          $ra
    ctx->pc = 0x33F254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F254u;
        // 0x33f258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F25Cu;
}

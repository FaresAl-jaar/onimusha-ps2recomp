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

// Function: sub_00206040
// Address: 0x206040 - 0x206170
void sub_00206040_0x206040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206040_0x206040");
#endif

    switch (ctx->pc) {
        case 0x206064u: goto label_206064;
        case 0x206078u: goto label_206078;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060f8u: goto label_2060f8;
        case 0x206100u: goto label_206100;
        case 0x206108u: goto label_206108;
        case 0x206110u: goto label_206110;
        case 0x20611cu: goto label_20611c;
        case 0x206128u: goto label_206128;
        case 0x206134u: goto label_206134;
        case 0x20613cu: goto label_20613c;
        case 0x206144u: goto label_206144;
        default: break;
    }

    ctx->pc = 0x206040u;

    // 0x206040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20604c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206050: 0x26110284  addiu       $s1, $s0, 0x284
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x206054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x206054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x206058: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x206058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20605c: 0xc081544  jal         func_205510
    ctx->pc = 0x20605Cu;
    SET_GPR_U32(ctx, 31, 0x206064u);
    ctx->pc = 0x206060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20605Cu;
    // 0x206060: 0x261202a4  addiu       $s2, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20605Cu, 0x206064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206064u;
label_206064:
    // 0x206064: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x206064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x206068: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x206068u;
    {
        const bool branch_taken_0x206068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206068u;
        // 0x20606c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206068) {
            ctx->pc = 0x206100u;
            goto label_206100;
        }
    }
    ctx->pc = 0x206070u;
    // 0x206070: 0xc080caa  jal         func_2032A8
    ctx->pc = 0x206070u;
    SET_GPR_U32(ctx, 31, 0x206078u);
    ctx->pc = 0x2032A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2032A8u, 0x206070u, 0x206078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206078u;
label_206078:
    // 0x206078: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206078u;
    {
        const bool branch_taken_0x206078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206078u;
        // 0x20607c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206078) {
            ctx->pc = 0x2060A0u;
            goto label_2060a0;
        }
    }
    ctx->pc = 0x206080u;
    // 0x206080: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20608c: 0x24847248  addiu       $a0, $a0, 0x7248
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29256));
    // 0x206090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x206094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206098: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x206098u;
    ctx->pc = 0x20609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206098u;
    // 0x20609c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2060A0u;
label_2060a0:
    // 0x2060a0: 0xc082ce2  jal         func_20B388
    ctx->pc = 0x2060A0u;
    SET_GPR_U32(ctx, 31, 0x2060A8u);
    ctx->pc = 0x2060A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060A0u;
    // 0x2060a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B388u, 0x2060A0u, 0x2060A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060A8u;
label_2060a8:
    // 0x2060a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2060a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2060ac: 0xc082ce2  jal         func_20B388
    ctx->pc = 0x2060ACu;
    SET_GPR_U32(ctx, 31, 0x2060B4u);
    ctx->pc = 0x2060B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060ACu;
    // 0x2060b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B388u, 0x2060ACu, 0x2060B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060B4u;
label_2060b4:
    // 0x2060b4: 0xc082522  jal         func_209488
    ctx->pc = 0x2060B4u;
    SET_GPR_U32(ctx, 31, 0x2060BCu);
    ctx->pc = 0x2060B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060B4u;
    // 0x2060b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209488u, 0x2060B4u, 0x2060BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060BCu;
label_2060bc:
    // 0x2060bc: 0xc082502  jal         func_209408
    ctx->pc = 0x2060BCu;
    SET_GPR_U32(ctx, 31, 0x2060C4u);
    ctx->pc = 0x2060C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060BCu;
    // 0x2060c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209408u, 0x2060BCu, 0x2060C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060C4u;
label_2060c4:
    // 0x2060c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2060C4u;
    {
        const bool branch_taken_0x2060c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060C4u;
        // 0x2060c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060c4) {
            ctx->pc = 0x2060F0u;
            goto label_2060f0;
        }
    }
    ctx->pc = 0x2060CCu;
    // 0x2060cc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2060ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2060d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2060d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2060d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2060d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2060d8: 0x24847278  addiu       $a0, $a0, 0x7278
    ctx->pc = 0x2060d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29304));
    // 0x2060dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2060dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2060e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2060e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2060e4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2060E4u;
    ctx->pc = 0x2060E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060E4u;
    // 0x2060e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2060ECu;
    // 0x2060ec: 0x0  nop
    ctx->pc = 0x2060ecu;
    // NOP
label_2060f0:
    // 0x2060f0: 0xc08251a  jal         func_209468
    ctx->pc = 0x2060F0u;
    SET_GPR_U32(ctx, 31, 0x2060F8u);
    ctx->pc = 0x209468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209468u, 0x2060F0u, 0x2060F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060F8u;
label_2060f8:
    // 0x2060f8: 0xc08143e  jal         func_2050F8
    ctx->pc = 0x2060F8u;
    SET_GPR_U32(ctx, 31, 0x206100u);
    ctx->pc = 0x2060FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060F8u;
    // 0x2060fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050F8u, 0x2060F8u, 0x206100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206100u;
label_206100:
    // 0x206100: 0xc08185c  jal         func_206170
    ctx->pc = 0x206100u;
    SET_GPR_U32(ctx, 31, 0x206108u);
    ctx->pc = 0x206104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206100u;
    // 0x206104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206170u, 0x206100u, 0x206108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206108u;
label_206108:
    // 0x206108: 0xc0817b0  jal         func_205EC0
    ctx->pc = 0x206108u;
    SET_GPR_U32(ctx, 31, 0x206110u);
    ctx->pc = 0x20610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206108u;
    // 0x20610c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EC0u, 0x206108u, 0x206110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206110u;
label_206110:
    // 0x206110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206114: 0xc081970  jal         func_2065C0
    ctx->pc = 0x206114u;
    SET_GPR_U32(ctx, 31, 0x20611Cu);
    ctx->pc = 0x206118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206114u;
    // 0x206118: 0x82050072  lb          $a1, 0x72($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065C0u, 0x206114u, 0x20611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20611Cu;
label_20611c:
    // 0x20611c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20611cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206120: 0xc082c2e  jal         func_20B0B8
    ctx->pc = 0x206120u;
    SET_GPR_U32(ctx, 31, 0x206128u);
    ctx->pc = 0x206124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206120u;
    // 0x206124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B8u, 0x206120u, 0x206128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206128u;
label_206128:
    // 0x206128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20612c: 0xc082c2e  jal         func_20B0B8
    ctx->pc = 0x20612Cu;
    SET_GPR_U32(ctx, 31, 0x206134u);
    ctx->pc = 0x206130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20612Cu;
    // 0x206130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B8u, 0x20612Cu, 0x206134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206134u;
label_206134:
    // 0x206134: 0xc082bd0  jal         func_20AF40
    ctx->pc = 0x206134u;
    SET_GPR_U32(ctx, 31, 0x20613Cu);
    ctx->pc = 0x206138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206134u;
    // 0x206138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF40u, 0x206134u, 0x20613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20613Cu;
label_20613c:
    // 0x20613c: 0xc082bd0  jal         func_20AF40
    ctx->pc = 0x20613Cu;
    SET_GPR_U32(ctx, 31, 0x206144u);
    ctx->pc = 0x206140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20613Cu;
    // 0x206140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF40u, 0x20613Cu, 0x206144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206144u;
label_206144:
    // 0x206144: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x206144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x206148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20614c: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x20614cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x206150: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x206150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x206154: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x206154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x206158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20615c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206160: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206164: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x206164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206168: 0x3e00008  jr          $ra
    ctx->pc = 0x206168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206168u;
        // 0x20616c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206170u;
}

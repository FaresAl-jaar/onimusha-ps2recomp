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

// Function: sub_00153520
// Address: 0x153520 - 0x153654
void sub_00153520_0x153520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153520_0x153520");
#endif

    switch (ctx->pc) {
        case 0x153560u: goto label_153560;
        case 0x1535c4u: goto label_1535c4;
        case 0x1535dcu: goto label_1535dc;
        case 0x1535ecu: goto label_1535ec;
        case 0x153604u: goto label_153604;
        case 0x153620u: goto label_153620;
        case 0x15363cu: goto label_15363c;
        default: break;
    }

    ctx->pc = 0x153520u;

    // 0x153520: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153524: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153528: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x15352c: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x153530: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x153534: 0xa44024  and         $t0, $a1, $a0
    ctx->pc = 0x153534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x153538: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x153538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15353c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x153540: 0x683023  subu        $a2, $v1, $t0
    ctx->pc = 0x153540u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x153544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153548: 0x2cc32000  sltiu       $v1, $a2, 0x2000
    ctx->pc = 0x153548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x15354c: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x15354Cu;
    {
        const bool branch_taken_0x15354c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15354Cu;
        // 0x153550: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15354c) {
            ctx->pc = 0x153640u;
            goto label_153640;
        }
    }
    ctx->pc = 0x153554u;
    // 0x153554: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x153558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15355c: 0x2463e610  addiu       $v1, $v1, -0x19F0
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960656));
label_153560:
    // 0x153560: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x153560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x153564: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x153564u;
    {
        const bool branch_taken_0x153564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153564u;
        // 0x153568: 0x42900  sll         $a1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153564) {
            ctx->pc = 0x153610u;
            goto label_153610;
        }
    }
    ctx->pc = 0x15356Cu;
    // 0x15356c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x153570: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153574: 0x24c2f800  addiu       $v0, $a2, -0x800
    ctx->pc = 0x153574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965248));
    // 0x153578: 0x2484e614  addiu       $a0, $a0, -0x19EC
    ctx->pc = 0x153578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960660));
    // 0x15357c: 0x2463e618  addiu       $v1, $v1, -0x19E8
    ctx->pc = 0x15357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960664));
    // 0x153580: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x153580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153584: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x153584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153588: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15358c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x15358cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x153590: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x153590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x153594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153598: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x153598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15359c: 0x2442e61c  addiu       $v0, $v0, -0x19E4
    ctx->pc = 0x15359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960668));
    // 0x1535a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1535a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1535a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1535a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1535a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535ac: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x1535acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1535b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1535b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1535b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1535b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535bc: 0xc049590  jal         func_125640
    ctx->pc = 0x1535BCu;
    SET_GPR_U32(ctx, 31, 0x1535C4u);
    ctx->pc = 0x1535C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535BCu;
    // 0x1535c0: 0x2450ffc0  addiu       $s0, $v0, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1535BCu, 0x1535C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535C4u;
label_1535c4:
    // 0x1535c4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1535c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1535c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1535cc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1535ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x1535d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1535d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535d4: 0xc054c10  jal         func_153040
    ctx->pc = 0x1535D4u;
    SET_GPR_U32(ctx, 31, 0x1535DCu);
    ctx->pc = 0x1535D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535D4u;
    // 0x1535d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x1535D4u, 0x1535DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535DCu;
label_1535dc:
    // 0x1535dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1535dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1535e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535e4: 0xc049590  jal         func_125640
    ctx->pc = 0x1535E4u;
    SET_GPR_U32(ctx, 31, 0x1535ECu);
    ctx->pc = 0x1535E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535E4u;
    // 0x1535e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1535E4u, 0x1535ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535ECu;
label_1535ec:
    // 0x1535ec: 0xae310008  sw          $s1, 0x8($s1)
    ctx->pc = 0x1535ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 17));
    // 0x1535f0: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x1535f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x1535f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1535f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1535f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1535f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535fc: 0xc054c10  jal         func_153040
    ctx->pc = 0x1535FCu;
    SET_GPR_U32(ctx, 31, 0x153604u);
    ctx->pc = 0x153600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535FCu;
    // 0x153600: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x1535FCu, 0x153604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153604u;
label_153604:
    // 0x153604: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x153604u;
    {
        const bool branch_taken_0x153604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153604) {
            ctx->pc = 0x153640u;
            goto label_153640;
        }
    }
    ctx->pc = 0x15360Cu;
    // 0x15360c: 0x0  nop
    ctx->pc = 0x15360cu;
    // NOP
label_153610:
    // 0x153610: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x153610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153614: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x153614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x153618: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x153618u;
    {
        const bool branch_taken_0x153618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153618u;
        // 0x15361c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153618) {
            ctx->pc = 0x153560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153560;
        }
    }
    ctx->pc = 0x153620u;
label_153620:
    // 0x153620: 0x0  nop
    ctx->pc = 0x153620u;
    // NOP
    // 0x153624: 0x0  nop
    ctx->pc = 0x153624u;
    // NOP
    // 0x153628: 0x0  nop
    ctx->pc = 0x153628u;
    // NOP
    // 0x15362c: 0x0  nop
    ctx->pc = 0x15362cu;
    // NOP
    // 0x153630: 0x0  nop
    ctx->pc = 0x153630u;
    // NOP
    // 0x153634: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x153634u;
    {
        const bool branch_taken_0x153634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153634) {
            ctx->pc = 0x153620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153620;
        }
    }
    ctx->pc = 0x15363Cu;
label_15363c:
    // 0x15363c: 0x0  nop
    ctx->pc = 0x15363cu;
    // NOP
label_153640:
    // 0x153640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15364c: 0x3e00008  jr          $ra
    ctx->pc = 0x15364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15364Cu;
        // 0x153650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153654u;
}

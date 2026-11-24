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

// Function: sub_002F56A0
// Address: 0x2f56a0 - 0x2f5804
void sub_002F56A0_0x2f56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F56A0_0x2f56a0");
#endif

    switch (ctx->pc) {
        case 0x2f56f4u: goto label_2f56f4;
        case 0x2f570cu: goto label_2f570c;
        case 0x2f5764u: goto label_2f5764;
        case 0x2f57a8u: goto label_2f57a8;
        case 0x2f57b4u: goto label_2f57b4;
        case 0x2f57e4u: goto label_2f57e4;
        case 0x2f57f0u: goto label_2f57f0;
        default: break;
    }

    ctx->pc = 0x2f56a0u;

    // 0x2f56a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f56a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f56a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f56ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f56acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f56b0: 0x8083000c  lb          $v1, 0xC($a0)
    ctx->pc = 0x2f56b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f56b4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F56B4u;
    {
        const bool branch_taken_0x2f56b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56B4u;
        // 0x2f56b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56b4) {
            ctx->pc = 0x2F56F8u;
            goto label_2f56f8;
        }
    }
    ctx->pc = 0x2F56BCu;
    // 0x2f56bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F56BCu;
    {
        const bool branch_taken_0x2f56bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f56bc) {
            ctx->pc = 0x2F56D0u;
            goto label_2f56d0;
        }
    }
    ctx->pc = 0x2F56C4u;
    // 0x2f56c4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2F56C4u;
    {
        const bool branch_taken_0x2f56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f56c4) {
            ctx->pc = 0x2F57F0u;
            goto label_2f57f0;
        }
    }
    ctx->pc = 0x2F56CCu;
    // 0x2f56cc: 0x0  nop
    ctx->pc = 0x2f56ccu;
    // NOP
label_2f56d0:
    // 0x2f56d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2f56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f56d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f56d8: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f56d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f56dc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f56e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f56e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f56e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f56e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56ec: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x2F56ECu;
    SET_GPR_U32(ctx, 31, 0x2F56F4u);
    ctx->pc = 0x2F56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56ECu;
    // 0x2f56f0: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x2F56ECu, 0x2F56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56F4u;
label_2f56f4:
    // 0x2f56f4: 0x0  nop
    ctx->pc = 0x2f56f4u;
    // NOP
label_2f56f8:
    // 0x2f56f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f56fc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f5700: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f5700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f5704: 0xc0951c8  jal         func_254720
    ctx->pc = 0x2F5704u;
    SET_GPR_U32(ctx, 31, 0x2F570Cu);
    ctx->pc = 0x2F5708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5704u;
    // 0x2f5708: 0x3406fffe  ori         $a2, $zero, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254720u, 0x2F5704u, 0x2F570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F570Cu;
label_2f570c:
    // 0x2f570c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f570cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5710: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2f5710u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2f5714: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2f5714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2f5718: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F5718u;
    {
        const bool branch_taken_0x2f5718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5718u;
        // 0x2f571c: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5718) {
            ctx->pc = 0x2F5770u;
            goto label_2f5770;
        }
    }
    ctx->pc = 0x2F5720u;
    // 0x2f5720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f5720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f5724: 0x902364ca  lbu         $v1, 0x64CA($at)
    ctx->pc = 0x2f5724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 25802)));
    // 0x2f5728: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5728u;
    {
        const bool branch_taken_0x2f5728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5728u;
        // 0x2f572c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5728) {
            ctx->pc = 0x2F5770u;
            goto label_2f5770;
        }
    }
    ctx->pc = 0x2F5730u;
    // 0x2f5730: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f5730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f5734: 0x2442c6e8  addiu       $v0, $v0, -0x3918
    ctx->pc = 0x2f5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952680));
    // 0x2f5738: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2f5738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f573c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2f573cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5740: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f5740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f5744: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f5744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f5748: 0xffab0008  sd          $t3, 0x8($sp)
    ctx->pc = 0x2f5748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 11));
    // 0x2f574c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2f574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f5750: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x2f5750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2f5754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5758: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2f5758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f575c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2F575Cu;
    SET_GPR_U32(ctx, 31, 0x2F5764u);
    ctx->pc = 0x2F5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F575Cu;
    // 0x2f5760: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2F575Cu, 0x2F5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5764u;
label_2f5764:
    // 0x2f5764: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5764u;
    {
        const bool branch_taken_0x2f5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5764) {
            ctx->pc = 0x2F57A8u;
            goto label_2f57a8;
        }
    }
    ctx->pc = 0x2F576Cu;
    // 0x2f576c: 0x0  nop
    ctx->pc = 0x2f576cu;
    // NOP
label_2f5770:
    // 0x2f5770: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f5770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f5774: 0x2442c6e8  addiu       $v0, $v0, -0x3918
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952680));
    // 0x2f5778: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f5778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f577c: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2f577cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f5780: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f5780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f5784: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f5784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f5788: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2f5788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f578c: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x2f578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2f5790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5794: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2f5794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f5798: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2f5798u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f579c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2f579cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f57a0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2F57A0u;
    SET_GPR_U32(ctx, 31, 0x2F57A8u);
    ctx->pc = 0x2F57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57A0u;
    // 0x2f57a4: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2F57A0u, 0x2F57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57A8u;
label_2f57a8:
    // 0x2f57a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f57a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f57ac: 0xc0951d8  jal         func_254760
    ctx->pc = 0x2F57ACu;
    SET_GPR_U32(ctx, 31, 0x2F57B4u);
    ctx->pc = 0x2F57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57ACu;
    // 0x2f57b0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x2F57ACu, 0x2F57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57B4u;
label_2f57b4:
    // 0x2f57b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f57b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f57b8: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2f57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2f57bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f57bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f57c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F57C0u;
    {
        const bool branch_taken_0x2f57c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57C0u;
        // 0x2f57c4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57c0) {
            ctx->pc = 0x2F57F0u;
            goto label_2f57f0;
        }
    }
    ctx->pc = 0x2F57C8u;
    // 0x2f57c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f57c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57cc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f57d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f57d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f57d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f57d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57dc: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2F57DCu;
    SET_GPR_U32(ctx, 31, 0x2F57E4u);
    ctx->pc = 0x2F57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57DCu;
    // 0x2f57e0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2F57DCu, 0x2F57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57E4u;
label_2f57e4:
    // 0x2f57e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57e8: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F57E8u;
    SET_GPR_U32(ctx, 31, 0x2F57F0u);
    ctx->pc = 0x2F57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F57E8u;
    // 0x2f57ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F57E8u, 0x2F57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F57F0u;
label_2f57f0:
    // 0x2f57f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f57f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f57f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f57f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f57f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f57f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F57FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57FCu;
        // 0x2f5800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F57FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5804u;
}

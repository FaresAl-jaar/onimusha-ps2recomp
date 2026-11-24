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

// Function: sub_003F56A0
// Address: 0x3f56a0 - 0x3f5758
void sub_003F56A0_0x3f56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F56A0_0x3f56a0");
#endif

    switch (ctx->pc) {
        case 0x3f56b8u: goto label_3f56b8;
        case 0x3f56c8u: goto label_3f56c8;
        case 0x3f56d8u: goto label_3f56d8;
        case 0x3f56e8u: goto label_3f56e8;
        case 0x3f56f8u: goto label_3f56f8;
        case 0x3f5708u: goto label_3f5708;
        case 0x3f5718u: goto label_3f5718;
        case 0x3f5728u: goto label_3f5728;
        case 0x3f5734u: goto label_3f5734;
        default: break;
    }

    ctx->pc = 0x3f56a0u;

    // 0x3f56a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f56a4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f56a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f56ac: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3f56acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3f56b0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3F56B0u;
    SET_GPR_U32(ctx, 31, 0x3F56B8u);
    ctx->pc = 0x3F56B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56B0u;
    // 0x3f56b4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3F56B0u, 0x3F56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56B8u;
label_3f56b8:
    // 0x3f56b8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f56b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f56bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3f56bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3f56c0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3F56C0u;
    SET_GPR_U32(ctx, 31, 0x3F56C8u);
    ctx->pc = 0x3F56C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56C0u;
    // 0x3f56c4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3F56C0u, 0x3F56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56C8u;
label_3f56c8:
    // 0x3f56c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f56cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3f56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3f56d0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3F56D0u;
    SET_GPR_U32(ctx, 31, 0x3F56D8u);
    ctx->pc = 0x3F56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56D0u;
    // 0x3f56d4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3F56D0u, 0x3F56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56D8u;
label_3f56d8:
    // 0x3f56d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f56d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f56dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3f56dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3f56e0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3F56E0u;
    SET_GPR_U32(ctx, 31, 0x3F56E8u);
    ctx->pc = 0x3F56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56E0u;
    // 0x3f56e4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3F56E0u, 0x3F56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56E8u;
label_3f56e8:
    // 0x3f56e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f56ec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3f56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3f56f0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3F56F0u;
    SET_GPR_U32(ctx, 31, 0x3F56F8u);
    ctx->pc = 0x3F56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F56F0u;
    // 0x3f56f4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3F56F0u, 0x3F56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F56F8u;
label_3f56f8:
    // 0x3f56f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f56fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3f56fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3f5700: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3F5700u;
    SET_GPR_U32(ctx, 31, 0x3F5708u);
    ctx->pc = 0x3F5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5700u;
    // 0x3f5704: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3F5700u, 0x3F5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5708u;
label_3f5708:
    // 0x3f5708: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f570c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f5710: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x3F5710u;
    SET_GPR_U32(ctx, 31, 0x3F5718u);
    ctx->pc = 0x3F5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5710u;
    // 0x3f5714: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x3F5710u, 0x3F5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5718u;
label_3f5718:
    // 0x3f5718: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f5718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f571c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f5720: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x3F5720u;
    SET_GPR_U32(ctx, 31, 0x3F5728u);
    ctx->pc = 0x3F5724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5720u;
    // 0x3f5724: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x3F5720u, 0x3F5728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5728u;
label_3f5728:
    // 0x3f5728: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3f5728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3f572c: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x3F572Cu;
    SET_GPR_U32(ctx, 31, 0x3F5734u);
    ctx->pc = 0x3F5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F572Cu;
    // 0x3f5730: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x3F572Cu, 0x3F5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5734u;
label_3f5734:
    // 0x3f5734: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5738: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3f5738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3f573c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3f573cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3f5740: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3f5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3f5744: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f5744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f5748: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3f5748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3f574c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f574cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5750: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5750u;
        // 0x3f5754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5758u;
}

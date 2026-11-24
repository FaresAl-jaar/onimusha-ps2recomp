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

// Function: sub_00117970
// Address: 0x117970 - 0x117a34
void sub_00117970_0x117970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117970_0x117970");
#endif

    switch (ctx->pc) {
        case 0x1179a0u: goto label_1179a0;
        case 0x1179b8u: goto label_1179b8;
        case 0x1179c0u: goto label_1179c0;
        case 0x1179c8u: goto label_1179c8;
        case 0x1179d4u: goto label_1179d4;
        case 0x1179e0u: goto label_1179e0;
        case 0x1179e8u: goto label_1179e8;
        case 0x1179f0u: goto label_1179f0;
        case 0x117a00u: goto label_117a00;
        case 0x117a14u: goto label_117a14;
        default: break;
    }

    ctx->pc = 0x117970u;

    // 0x117970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117974: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x117974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x117978: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11797c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117980: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x117980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11798c: 0x24502ee8  addiu       $s0, $v0, 0x2EE8
    ctx->pc = 0x11798cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12008));
    // 0x117990: 0x8c442ee8  lw          $a0, 0x2EE8($v0)
    ctx->pc = 0x117990u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x402EE8u));
    // 0x117994: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x117994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x117998: 0xc045e58  jal         func_117960
    ctx->pc = 0x117998u;
    SET_GPR_U32(ctx, 31, 0x1179A0u);
    ctx->pc = 0x11799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117998u;
    // 0x11799c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x117998u, 0x1179A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179A0u;
label_1179a0:
    // 0x1179a0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1179a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1179a4: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1179a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1179a8: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1179a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x1179ac: 0x24a52b68  addiu       $a1, $a1, 0x2B68
    ctx->pc = 0x1179acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11112));
    // 0x1179b0: 0xc045e42  jal         func_117908
    ctx->pc = 0x1179B0u;
    SET_GPR_U32(ctx, 31, 0x1179B8u);
    ctx->pc = 0x1179B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179B0u;
    // 0x1179b4: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117908u, 0x1179B0u, 0x1179B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179B8u;
label_1179b8:
    // 0x1179b8: 0xc043898  jal         func_10E260
    ctx->pc = 0x1179B8u;
    SET_GPR_U32(ctx, 31, 0x1179C0u);
    ctx->pc = 0x1179BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179B8u;
    // 0x1179bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1179B8u, 0x1179C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179C0u;
label_1179c0:
    // 0x1179c0: 0xc043898  jal         func_10E260
    ctx->pc = 0x1179C0u;
    SET_GPR_U32(ctx, 31, 0x1179C8u);
    ctx->pc = 0x1179C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179C0u;
    // 0x1179c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1179C0u, 0x1179C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179C8u;
label_1179c8:
    // 0x1179c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1179c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1179cc: 0xc045e58  jal         func_117960
    ctx->pc = 0x1179CCu;
    SET_GPR_U32(ctx, 31, 0x1179D4u);
    ctx->pc = 0x1179D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179CCu;
    // 0x1179d0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x1179CCu, 0x1179D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179D4u;
label_1179d4:
    // 0x1179d4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1179d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1179d8: 0xc045e58  jal         func_117960
    ctx->pc = 0x1179D8u;
    SET_GPR_U32(ctx, 31, 0x1179E0u);
    ctx->pc = 0x1179DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179D8u;
    // 0x1179dc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x1179D8u, 0x1179E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179E0u;
label_1179e0:
    // 0x1179e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1179e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1179e4: 0x0  nop
    ctx->pc = 0x1179e4u;
    // NOP
label_1179e8:
    // 0x1179e8: 0xc045e54  jal         func_117950
    ctx->pc = 0x1179E8u;
    SET_GPR_U32(ctx, 31, 0x1179F0u);
    ctx->pc = 0x1179ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179E8u;
    // 0x1179ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117950u, 0x1179E8u, 0x1179F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179F0u;
label_1179f0:
    // 0x1179f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1179f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1179f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1179f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179f8: 0xc045e58  jal         func_117960
    ctx->pc = 0x1179F8u;
    SET_GPR_U32(ctx, 31, 0x117A00u);
    ctx->pc = 0x1179FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179F8u;
    // 0x1179fc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x1179F8u, 0x117A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A00u;
label_117a00:
    // 0x117a00: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x117a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x117a04: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117A04u;
    {
        const bool branch_taken_0x117a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117a04) {
            ctx->pc = 0x117A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117A04u;
            // 0x117a08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1179e8;
        }
    }
    ctx->pc = 0x117A0Cu;
    // 0x117a0c: 0xc045e54  jal         func_117950
    ctx->pc = 0x117A0Cu;
    SET_GPR_U32(ctx, 31, 0x117A14u);
    ctx->pc = 0x117A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A0Cu;
    // 0x117a10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117950u, 0x117A0Cu, 0x117A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A14u;
label_117a14:
    // 0x117a14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x117a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x117a18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a28: 0xac622ee0  sw          $v0, 0x2EE0($v1)
    ctx->pc = 0x117a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x402EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x402EE0u, _value); } while (0);
    // 0x117a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x117A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A2Cu;
        // 0x117a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A34u;
}

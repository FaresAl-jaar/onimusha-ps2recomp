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

// Function: sub_003DC970
// Address: 0x3dc970 - 0x3dca74
void sub_003DC970_0x3dc970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC970_0x3dc970");
#endif

    switch (ctx->pc) {
        case 0x3dc9a8u: goto label_3dc9a8;
        case 0x3dc9e4u: goto label_3dc9e4;
        case 0x3dca3cu: goto label_3dca3c;
        default: break;
    }

    ctx->pc = 0x3dc970u;

    // 0x3dc970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dc970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3dc974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dc974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3dc978: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dc978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3dc97c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dc97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dc980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dc980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dc984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dc984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dc988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dc98c: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x3dc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3dc990: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3dc990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3dc994: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3dc994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dc998: 0x2c610015  sltiu       $at, $v1, 0x15
    ctx->pc = 0x3dc998u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3dc99c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x3DC99Cu;
    {
        const bool branch_taken_0x3dc99c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC99Cu;
        // 0x3dc9a0: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc99c) {
            ctx->pc = 0x3DCA58u;
            goto label_3dca58;
        }
    }
    ctx->pc = 0x3DC9A4u;
    // 0x3dc9a4: 0x24100500  addiu       $s0, $zero, 0x500
    ctx->pc = 0x3dc9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_3dc9a8:
    // 0x3dc9a8: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x3dc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x3dc9ac: 0x3c024681  lui         $v0, 0x4681
    ctx->pc = 0x3dc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18049 << 16));
    // 0x3dc9b0: 0x3442f200  ori         $v0, $v0, 0xF200
    ctx->pc = 0x3dc9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61952);
    // 0x3dc9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dc9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc9b8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3dc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3dc9bc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x3dc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dc9c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3dc9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dc9c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3DC9C4u;
    {
        const bool branch_taken_0x3dc9c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9C4u;
        // 0x3dc9c8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc9c4) {
            ctx->pc = 0x3DC9D0u;
            goto label_3dc9d0;
        }
    }
    ctx->pc = 0x3DC9CCu;
    // 0x3dc9cc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3dc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3dc9d0:
    // 0x3dc9d0: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x3dc9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x3dc9d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3dc9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3dc9d8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x3dc9d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3dc9dc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DC9DCu;
    SET_GPR_U32(ctx, 31, 0x3DC9E4u);
    ctx->pc = 0x3DC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC9DCu;
    // 0x3dc9e0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DC9DCu, 0x3DC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC9E4u;
label_3dc9e4:
    // 0x3dc9e4: 0x8e4b004c  lw          $t3, 0x4C($s2)
    ctx->pc = 0x3dc9e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3dc9e8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3dc9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3dc9ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3dc9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3dc9f0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x3dc9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3dc9f4: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x3dc9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3dc9f8: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x3dc9f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dc9fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3dc9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dca00: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3dca00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca04: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x3dca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3dca08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3dca0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3dca10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca14: 0x8d630094  lw          $v1, 0x94($t3)
    ctx->pc = 0x3dca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
    // 0x3dca18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3dca18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3dca1c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3dca1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca20: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x3dca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    // 0x3dca24: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x3dca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3dca28: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x3dca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x3dca2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3dca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3dca30: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x3dca30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dca34: 0xc09fbac  jal         func_27EEB0
    ctx->pc = 0x3DCA34u;
    SET_GPR_U32(ctx, 31, 0x3DCA3Cu);
    ctx->pc = 0x3DCA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCA34u;
    // 0x3dca38: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EEB0u, 0x3DCA34u, 0x3DCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCA3Cu;
label_3dca3c:
    // 0x3dca3c: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x3dca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3dca40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3dca40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3dca44: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x3dca44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x3dca48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3dca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3dca4c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3dca4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dca50: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3DCA50u;
    {
        const bool branch_taken_0x3dca50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCA50u;
        // 0x3dca54: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dca50) {
            ctx->pc = 0x3DC9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc9a8;
        }
    }
    ctx->pc = 0x3DCA58u;
label_3dca58:
    // 0x3dca58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dca5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3dca5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dca60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dca60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dca64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dca64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dca68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dca68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dca6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCA6Cu;
        // 0x3dca70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCA74u;
}

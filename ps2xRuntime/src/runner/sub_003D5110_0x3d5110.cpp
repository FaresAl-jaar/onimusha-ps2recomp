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

// Function: sub_003D5110
// Address: 0x3d5110 - 0x3d5234
void sub_003D5110_0x3d5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5110_0x3d5110");
#endif

    switch (ctx->pc) {
        case 0x3d51a0u: goto label_3d51a0;
        case 0x3d51b0u: goto label_3d51b0;
        case 0x3d51c4u: goto label_3d51c4;
        case 0x3d5218u: goto label_3d5218;
        default: break;
    }

    ctx->pc = 0x3d5110u;

    // 0x3d5110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d5110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d5114: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3d5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3d5118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d5118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d511c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d5120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d5120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d5124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5128: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d5128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d512c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d5130: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d5134: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3d5134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x3d5138: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d5138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d513c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d5140: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3d5140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3d5144: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d5144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d5148: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d5148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d514c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3d514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3d5150: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d5150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d5154: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d5154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d5158: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3d5158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3d515c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d515cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d5160: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d5160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d5164: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d5164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d5168: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d5168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d516c: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x3d516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3d5170: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3d5170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3d5174: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3d5174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3d5178: 0x9483078c  lhu         $v1, 0x78C($a0)
    ctx->pc = 0x3d5178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1932)));
    // 0x3d517c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3d517cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3d5180: 0xa483078c  sh          $v1, 0x78C($a0)
    ctx->pc = 0x3d5180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d5184: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3d5184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3d5188: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5188u;
    {
        const bool branch_taken_0x3d5188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5188u;
        // 0x3d518c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5188) {
            ctx->pc = 0x3D5198u;
            goto label_3d5198;
        }
    }
    ctx->pc = 0x3D5190u;
    // 0x3d5190: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D5190u;
    {
        const bool branch_taken_0x3d5190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5190) {
            ctx->pc = 0x3D51A8u;
            goto label_3d51a8;
        }
    }
    ctx->pc = 0x3D5198u;
label_3d5198:
    // 0x3d5198: 0xc0f542c  jal         func_3D50B0
    ctx->pc = 0x3D5198u;
    SET_GPR_U32(ctx, 31, 0x3D51A0u);
    ctx->pc = 0x3D50B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D50B0u, 0x3D5198u, 0x3D51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D51A0u;
label_3d51a0:
    // 0x3d51a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3D51A0u;
    {
        const bool branch_taken_0x3d51a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d51a0) {
            ctx->pc = 0x3D5210u;
            goto label_3d5210;
        }
    }
    ctx->pc = 0x3D51A8u;
label_3d51a8:
    // 0x3d51a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d51a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d51ac: 0x27938060  addiu       $s3, $gp, -0x7FA0
    ctx->pc = 0x3d51acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_3d51b0:
    // 0x3d51b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3d51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3d51b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D51B4u;
    {
        const bool branch_taken_0x3d51b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51B4u;
        // 0x3d51b8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51b4) {
            ctx->pc = 0x3D51E8u;
            goto label_3d51e8;
        }
    }
    ctx->pc = 0x3D51BCu;
    // 0x3d51bc: 0xc096988  jal         func_25A620
    ctx->pc = 0x3D51BCu;
    SET_GPR_U32(ctx, 31, 0x3D51C4u);
    ctx->pc = 0x3D51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D51BCu;
    // 0x3d51c0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3D51BCu, 0x3D51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D51C4u;
label_3d51c4:
    // 0x3d51c4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3d51c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d51c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d51cc: 0x0  nop
    ctx->pc = 0x3d51ccu;
    // NOP
    // 0x3d51d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d51d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d51d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3D51D4u;
    {
        const bool branch_taken_0x3d51d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d51d4) {
            ctx->pc = 0x3D51E8u;
            goto label_3d51e8;
        }
    }
    ctx->pc = 0x3D51DCu;
    // 0x3d51dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D51DCu;
    {
        const bool branch_taken_0x3d51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51DCu;
        // 0x3d51e0: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51dc) {
            ctx->pc = 0x3D51F8u;
            goto label_3d51f8;
        }
    }
    ctx->pc = 0x3D51E4u;
    // 0x3d51e4: 0x0  nop
    ctx->pc = 0x3d51e4u;
    // NOP
label_3d51e8:
    // 0x3d51e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d51e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d51ec: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3d51ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d51f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3D51F0u;
    {
        const bool branch_taken_0x3d51f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51F0u;
        // 0x3d51f4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51f0) {
            ctx->pc = 0x3D51B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d51b0;
        }
    }
    ctx->pc = 0x3D51F8u;
label_3d51f8:
    // 0x3d51f8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D51F8u;
    {
        const bool branch_taken_0x3d51f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d51f8) {
            ctx->pc = 0x3D5210u;
            goto label_3d5210;
        }
    }
    ctx->pc = 0x3D5200u;
    // 0x3d5200: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x3d5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3d5204: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3d5204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3d5208: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x3d5208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x3d520c: 0x0  nop
    ctx->pc = 0x3d520cu;
    // NOP
label_3d5210:
    // 0x3d5210: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3D5210u;
    SET_GPR_U32(ctx, 31, 0x3D5218u);
    ctx->pc = 0x3D5214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5210u;
    // 0x3d5214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3D5210u, 0x3D5218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5218u;
label_3d5218:
    // 0x3d5218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d5218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d521c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d521cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d5220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d522c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D522Cu;
        // 0x3d5230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D522Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5234u;
}

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

// Function: sub_003DDA70
// Address: 0x3dda70 - 0x3ddbdc
void sub_003DDA70_0x3dda70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDA70_0x3dda70");
#endif

    switch (ctx->pc) {
        case 0x3ddad8u: goto label_3ddad8;
        case 0x3ddb18u: goto label_3ddb18;
        case 0x3ddb28u: goto label_3ddb28;
        case 0x3ddb30u: goto label_3ddb30;
        case 0x3ddb68u: goto label_3ddb68;
        case 0x3ddb78u: goto label_3ddb78;
        case 0x3ddb88u: goto label_3ddb88;
        case 0x3ddba0u: goto label_3ddba0;
        default: break;
    }

    ctx->pc = 0x3dda70u;

    // 0x3dda70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3dda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3dda74: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3dda74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3dda78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3dda78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3dda7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dda7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dda80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3dda80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3dda84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dda84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3dda88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3dda88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dda8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3dda90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dda90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dda94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dda94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dda98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dda98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dda9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddaa0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3ddaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ddaa4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ddaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ddaa8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ddaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3ddaac: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x3ddaacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ddab0: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x3ddab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ddab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ddab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ddab8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3DDAB8u;
    {
        const bool branch_taken_0x3ddab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ddab8) {
            ctx->pc = 0x3DDBB8u;
            goto label_3ddbb8;
        }
    }
    ctx->pc = 0x3DDAC0u;
    // 0x3ddac0: 0x92a3001e  lbu         $v1, 0x1E($s5)
    ctx->pc = 0x3ddac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x3ddac4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3ddac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ddac8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x3DDAC8u;
    {
        const bool branch_taken_0x3ddac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAC8u;
        // 0x3ddacc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddac8) {
            ctx->pc = 0x3DDBB8u;
            goto label_3ddbb8;
        }
    }
    ctx->pc = 0x3DDAD0u;
    // 0x3ddad0: 0x58100  sll         $s0, $a1, 4
    ctx->pc = 0x3ddad0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3ddad4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ddad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddad8:
    // 0x3ddad8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3ddad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3ddadc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ddadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ddae0: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x3ddae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3ddae4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3ddae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ddae8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DDAE8u;
    {
        const bool branch_taken_0x3ddae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAE8u;
        // 0x3ddaec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddae8) {
            ctx->pc = 0x3DDB00u;
            goto label_3ddb00;
        }
    }
    ctx->pc = 0x3DDAF0u;
    // 0x3ddaf0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDAF0u;
    {
        const bool branch_taken_0x3ddaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ddaf0) {
            ctx->pc = 0x3DDB00u;
            goto label_3ddb00;
        }
    }
    ctx->pc = 0x3DDAF8u;
    // 0x3ddaf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3DDAF8u;
    {
        const bool branch_taken_0x3ddaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddaf8) {
            ctx->pc = 0x3DDBA0u;
            goto label_3ddba0;
        }
    }
    ctx->pc = 0x3DDB00u;
label_3ddb00:
    // 0x3ddb00: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3ddb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3ddb04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ddb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ddb08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ddb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddb0c: 0x26470030  addiu       $a3, $s2, 0x30
    ctx->pc = 0x3ddb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3ddb10: 0xc0f75e8  jal         func_3DD7A0
    ctx->pc = 0x3DDB10u;
    SET_GPR_U32(ctx, 31, 0x3DDB18u);
    ctx->pc = 0x3DDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB10u;
    // 0x3ddb14: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD7A0u, 0x3DDB10u, 0x3DDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB18u;
label_3ddb18:
    // 0x3ddb18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ddb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ddb1c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3ddb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ddb20: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3DDB20u;
    SET_GPR_U32(ctx, 31, 0x3DDB28u);
    ctx->pc = 0x3DDB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB20u;
    // 0x3ddb24: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3DDB20u, 0x3DDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB28u;
label_3ddb28:
    // 0x3ddb28: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DDB28u;
    SET_GPR_U32(ctx, 31, 0x3DDB30u);
    ctx->pc = 0x3DDB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB28u;
    // 0x3ddb2c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DDB28u, 0x3DDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB30u;
label_3ddb30:
    // 0x3ddb30: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x3ddb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ddb34: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x3ddb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ddb38: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3ddb38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3ddb3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ddb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ddb40: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3DDB40u;
    {
        const bool branch_taken_0x3ddb40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ddb40) {
            ctx->pc = 0x3DDBA0u;
            goto label_3ddba0;
        }
    }
    ctx->pc = 0x3DDB48u;
    // 0x3ddb48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ddb48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ddb4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ddb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ddb50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ddb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddb54: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3ddb54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3ddb58: 0x0  nop
    ctx->pc = 0x3ddb58u;
    // NOP
    // 0x3ddb5c: 0x0  nop
    ctx->pc = 0x3ddb5cu;
    // NOP
    // 0x3ddb60: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DDB60u;
    SET_GPR_U32(ctx, 31, 0x3DDB68u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DDB60u, 0x3DDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB68u;
label_3ddb68:
    // 0x3ddb68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ddb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddb6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ddb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddb70: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DDB70u;
    SET_GPR_U32(ctx, 31, 0x3DDB78u);
    ctx->pc = 0x3DDB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB70u;
    // 0x3ddb74: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DDB70u, 0x3DDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB78u;
label_3ddb78:
    // 0x3ddb78: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3ddb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3ddb7c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3ddb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ddb80: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DDB80u;
    SET_GPR_U32(ctx, 31, 0x3DDB88u);
    ctx->pc = 0x3DDB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB80u;
    // 0x3ddb84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DDB80u, 0x3DDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB88u;
label_3ddb88:
    // 0x3ddb88: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x3ddb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x3ddb8c: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3ddb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3ddb90: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x3ddb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x3ddb94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ddb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ddb98: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DDB98u;
    SET_GPR_U32(ctx, 31, 0x3DDBA0u);
    ctx->pc = 0x3DDB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB98u;
    // 0x3ddb9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DDB98u, 0x3DDBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDBA0u;
label_3ddba0:
    // 0x3ddba0: 0x92a3001e  lbu         $v1, 0x1E($s5)
    ctx->pc = 0x3ddba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x3ddba4: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x3ddba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ddba8: 0x309300ff  andi        $s3, $a0, 0xFF
    ctx->pc = 0x3ddba8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3ddbac: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3ddbacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ddbb0: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3DDBB0u;
    {
        const bool branch_taken_0x3ddbb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBB0u;
        // 0x3ddbb4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddbb0) {
            ctx->pc = 0x3DDAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ddad8;
        }
    }
    ctx->pc = 0x3DDBB8u;
label_3ddbb8:
    // 0x3ddbb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ddbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ddbbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ddbbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ddbc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ddbc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ddbc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ddbc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ddbc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ddbc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ddbcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ddbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ddbd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ddbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ddbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBD4u;
        // 0x3ddbd8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDBDCu;
}

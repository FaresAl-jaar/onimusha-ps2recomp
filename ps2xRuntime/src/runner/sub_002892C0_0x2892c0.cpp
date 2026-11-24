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

// Function: sub_002892C0
// Address: 0x2892c0 - 0x2893f4
void sub_002892C0_0x2892c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002892C0_0x2892c0");
#endif

    switch (ctx->pc) {
        case 0x2893acu: goto label_2893ac;
        case 0x2893b8u: goto label_2893b8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893dcu: goto label_2893dc;
        default: break;
    }

    ctx->pc = 0x2892c0u;

    // 0x2892c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2892c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2892c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2892c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2892c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2892cc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2892ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2892d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2892d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2892d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2892d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2892d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2892d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2892dc: 0x24c60b8c  addiu       $a2, $a2, 0xB8C
    ctx->pc = 0x2892dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2956));
    // 0x2892e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2892e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2892e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2892e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2892e8: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2892e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2892ec: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x2892ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2892f0: 0x908207d9  lbu         $v0, 0x7D9($a0)
    ctx->pc = 0x2892f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2009)));
    // 0x2892f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2892f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2892f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2892f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2892fc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x289300: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x289300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x289304: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x289304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x289308: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28930c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x28930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x289310: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x289314: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x289314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289318: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x289318u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28931c: 0x0  nop
    ctx->pc = 0x28931cu;
    // NOP
    // 0x289320: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x289320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x289324: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x289324u;
    {
        const bool branch_taken_0x289324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289324u;
        // 0x289328: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289324) {
            ctx->pc = 0x289370u;
            goto label_289370;
        }
    }
    ctx->pc = 0x28932Cu;
    // 0x28932c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28932Cu;
    {
        const bool branch_taken_0x28932c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x289330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28932Cu;
        // 0x289330: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28932c) {
            ctx->pc = 0x289340u;
            goto label_289340;
        }
    }
    ctx->pc = 0x289334u;
    // 0x289334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289338: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289338u;
    {
        const bool branch_taken_0x289338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289338u;
        // 0x28933c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289338) {
            ctx->pc = 0x289358u;
            goto label_289358;
        }
    }
    ctx->pc = 0x289340u;
label_289340:
    // 0x289340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x289344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x289348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x289348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28934c: 0x0  nop
    ctx->pc = 0x28934cu;
    // NOP
    // 0x289350: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x289350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289354: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x289354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_289358:
    // 0x289358: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x289358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x28935c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289360: 0x0  nop
    ctx->pc = 0x289360u;
    // NOP
    // 0x289364: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x289364u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x289368: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x289368u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28936c: 0x0  nop
    ctx->pc = 0x28936cu;
    // NOP
label_289370:
    // 0x289370: 0x860404ec  lh          $a0, 0x4EC($s0)
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x289374: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x289378: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x289378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x28937c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x289380: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x289380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289384: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28938c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x28938cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289390: 0x0  nop
    ctx->pc = 0x289390u;
    // NOP
    // 0x289394: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x289394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x289398: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x289398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28939c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x28939cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2893a0: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x2893a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2893a4: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2893A4u;
    SET_GPR_U32(ctx, 31, 0x2893ACu);
    ctx->pc = 0x2893A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2893A4u;
    // 0x2893a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2893A4u, 0x2893ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893ACu;
label_2893ac:
    // 0x2893ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2893acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2893b0: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2893B0u;
    SET_GPR_U32(ctx, 31, 0x2893B8u);
    ctx->pc = 0x2893B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2893B0u;
    // 0x2893b4: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2893B0u, 0x2893B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893B8u;
label_2893b8:
    // 0x2893b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2893b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2893bc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2893bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2893c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2893c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893c4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2893C4u;
    SET_GPR_U32(ctx, 31, 0x2893CCu);
    ctx->pc = 0x2893C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2893C4u;
    // 0x2893c8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2893C4u, 0x2893CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893CCu;
label_2893cc:
    // 0x2893cc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2893ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2893d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2893d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2893d4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2893D4u;
    SET_GPR_U32(ctx, 31, 0x2893DCu);
    ctx->pc = 0x2893D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2893D4u;
    // 0x2893d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2893D4u, 0x2893DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893DCu;
label_2893dc:
    // 0x2893dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2893dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2893e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2893e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2893e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2893e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2893e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2893e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2893ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2893ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2893F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893ECu;
        // 0x2893f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2893ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2893F4u;
}

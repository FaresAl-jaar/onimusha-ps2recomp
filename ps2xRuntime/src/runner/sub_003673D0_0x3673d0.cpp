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

// Function: sub_003673D0
// Address: 0x3673d0 - 0x3674e4
void sub_003673D0_0x3673d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003673D0_0x3673d0");
#endif

    switch (ctx->pc) {
        case 0x3673e8u: goto label_3673e8;
        default: break;
    }

    ctx->pc = 0x3673d0u;

    // 0x3673d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3673d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3673d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3673d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3673d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3673d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3673dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3673dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3673e0: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3673E0u;
    SET_GPR_U32(ctx, 31, 0x3673E8u);
    ctx->pc = 0x3673E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3673E0u;
    // 0x3673e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3673E0u, 0x3673E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673E8u;
label_3673e8:
    // 0x3673e8: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3673e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3673ec: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3673ECu;
    {
        const bool branch_taken_0x3673ec = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3673F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673ECu;
        // 0x3673f0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673ec) {
            ctx->pc = 0x367400u;
            goto label_367400;
        }
    }
    ctx->pc = 0x3673F4u;
    // 0x3673f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3673f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3673f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3673F8u;
    {
        const bool branch_taken_0x3673f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3673FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673F8u;
        // 0x3673fc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673f8) {
            ctx->pc = 0x367418u;
            goto label_367418;
        }
    }
    ctx->pc = 0x367400u;
label_367400:
    // 0x367400: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x367400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x367404: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x367404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x367408: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x367408u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36740c: 0x0  nop
    ctx->pc = 0x36740cu;
    // NOP
    // 0x367410: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x367410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x367414: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x367414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_367418:
    // 0x367418: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x367418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36741c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x36741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x367420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367424: 0x0  nop
    ctx->pc = 0x367424u;
    // NOP
    // 0x367428: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x367428u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x36742c: 0x0  nop
    ctx->pc = 0x36742cu;
    // NOP
    // 0x367430: 0x0  nop
    ctx->pc = 0x367430u;
    // NOP
    // 0x367434: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367434u;
    {
        const bool branch_taken_0x367434 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x367434) {
            ctx->pc = 0x367448u;
            goto label_367448;
        }
    }
    ctx->pc = 0x36743Cu;
    // 0x36743c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x36743cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x367440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x367440u;
    {
        const bool branch_taken_0x367440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367440u;
        // 0x367444: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367440) {
            ctx->pc = 0x367464u;
            goto label_367464;
        }
    }
    ctx->pc = 0x367448u;
label_367448:
    // 0x367448: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36744c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36744cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x367450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x367450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367454: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x367454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x367458: 0x0  nop
    ctx->pc = 0x367458u;
    // NOP
    // 0x36745c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x36745cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x367460: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x367460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_367464:
    // 0x367464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x367464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x367468u;
    {
        const bool branch_taken_0x367468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367468) {
            ctx->pc = 0x367478u;
            goto label_367478;
        }
    }
    ctx->pc = 0x367470u;
    // 0x367470: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x367470u;
    {
        const bool branch_taken_0x367470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367470u;
        // 0x367474: 0x9603000a  lhu         $v1, 0xA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367470) {
            ctx->pc = 0x3674A8u;
            goto label_3674a8;
        }
    }
    ctx->pc = 0x367478u;
label_367478:
    // 0x367478: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367478u;
    {
        const bool branch_taken_0x367478 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x36747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367478u;
        // 0x36747c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367478) {
            ctx->pc = 0x36748Cu;
            goto label_36748c;
        }
    }
    ctx->pc = 0x367480u;
    // 0x367480: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x367480u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x367484u;
    {
        const bool branch_taken_0x367484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367484u;
        // 0x367488: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367484) {
            ctx->pc = 0x3674A4u;
            goto label_3674a4;
        }
    }
    ctx->pc = 0x36748Cu;
label_36748c:
    // 0x36748c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x367490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x367490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x367494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367498: 0x0  nop
    ctx->pc = 0x367498u;
    // NOP
    // 0x36749c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36749cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3674a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3674a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3674a4:
    // 0x3674a4: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x3674a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_3674a8:
    // 0x3674a8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3674a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3674ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3674acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3674b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3674b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3674b4: 0x0  nop
    ctx->pc = 0x3674b4u;
    // NOP
    // 0x3674b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3674b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3674bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3674bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3674c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3674C0u;
    {
        const bool branch_taken_0x3674c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3674c0) {
            ctx->pc = 0x3674D0u;
            goto label_3674d0;
        }
    }
    ctx->pc = 0x3674C8u;
    // 0x3674c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3674C8u;
    {
        const bool branch_taken_0x3674c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3674CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674C8u;
        // 0x3674cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3674c8) {
            ctx->pc = 0x3674D8u;
            goto label_3674d8;
        }
    }
    ctx->pc = 0x3674D0u;
label_3674d0:
    // 0x3674d0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x3674d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x3674d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3674d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3674d8:
    // 0x3674d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3674d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3674dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3674DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3674E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674DCu;
        // 0x3674e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674E4u;
}

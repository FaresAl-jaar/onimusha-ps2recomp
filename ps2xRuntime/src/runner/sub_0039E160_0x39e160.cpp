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

// Function: sub_0039E160
// Address: 0x39e160 - 0x39e2f4
void sub_0039E160_0x39e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E160_0x39e160");
#endif

    switch (ctx->pc) {
        case 0x39e184u: goto label_39e184;
        case 0x39e19cu: goto label_39e19c;
        case 0x39e1c4u: goto label_39e1c4;
        case 0x39e1ccu: goto label_39e1cc;
        case 0x39e1dcu: goto label_39e1dc;
        case 0x39e20cu: goto label_39e20c;
        default: break;
    }

    ctx->pc = 0x39e160u;

    // 0x39e160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39e164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39e168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39e16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39e170: 0x90832be2  lbu         $v1, 0x2BE2($a0)
    ctx->pc = 0x39e170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11234)));
    // 0x39e174: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x39E174u;
    {
        const bool branch_taken_0x39e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E174u;
        // 0x39e178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e174) {
            ctx->pc = 0x39E1E0u;
            goto label_39e1e0;
        }
    }
    ctx->pc = 0x39E17Cu;
    // 0x39e17c: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x39E17Cu;
    SET_GPR_U32(ctx, 31, 0x39E184u);
    ctx->pc = 0x39E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E17Cu;
    // 0x39e180: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x39E17Cu, 0x39E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E184u;
label_39e184:
    // 0x39e184: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x39E184u;
    {
        const bool branch_taken_0x39e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E184u;
        // 0x39e188: 0x27a4004f  addiu       $a0, $sp, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e184) {
            ctx->pc = 0x39E1E0u;
            goto label_39e1e0;
        }
    }
    ctx->pc = 0x39E18Cu;
    // 0x39e18c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e190: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x39e190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e194: 0xc0a2258  jal         func_288960
    ctx->pc = 0x39E194u;
    SET_GPR_U32(ctx, 31, 0x39E19Cu);
    ctx->pc = 0x39E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E194u;
    // 0x39e198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288960u, 0x39E194u, 0x39E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E19Cu;
label_39e19c:
    // 0x39e19c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39e1a0: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x39e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x39e1a4: 0x93a3004f  lbu         $v1, 0x4F($sp)
    ctx->pc = 0x39e1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
    // 0x39e1a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39e1ac: 0x24c625d0  addiu       $a2, $a2, 0x25D0
    ctx->pc = 0x39e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9680));
    // 0x39e1b0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39e1b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x39e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x39e1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e1bc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x39E1BCu;
    SET_GPR_U32(ctx, 31, 0x39E1C4u);
    ctx->pc = 0x39E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1BCu;
    // 0x39e1c0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x39E1BCu, 0x39E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1C4u;
label_39e1c4:
    // 0x39e1c4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39E1C4u;
    SET_GPR_U32(ctx, 31, 0x39E1CCu);
    ctx->pc = 0x39E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1C4u;
    // 0x39e1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39E1C4u, 0x39E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1CCu;
label_39e1cc:
    // 0x39e1cc: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39e1ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39e1d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39e1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e1d4: 0xc0aa304  jal         func_2A8C10
    ctx->pc = 0x39E1D4u;
    SET_GPR_U32(ctx, 31, 0x39E1DCu);
    ctx->pc = 0x39E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1D4u;
    // 0x39e1d8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8C10u, 0x39E1D4u, 0x39E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1DCu;
label_39e1dc:
    // 0x39e1dc: 0x0  nop
    ctx->pc = 0x39e1dcu;
    // NOP
label_39e1e0:
    // 0x39e1e0: 0x92042bec  lbu         $a0, 0x2BEC($s0)
    ctx->pc = 0x39e1e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11244)));
    // 0x39e1e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e1e8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x39E1E8u;
    {
        const bool branch_taken_0x39e1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39e1e8) {
            ctx->pc = 0x39E288u;
            goto label_39e288;
        }
    }
    ctx->pc = 0x39E1F0u;
    // 0x39e1f0: 0x92032bd6  lbu         $v1, 0x2BD6($s0)
    ctx->pc = 0x39e1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11222)));
    // 0x39e1f4: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x39E1F4u;
    {
        const bool branch_taken_0x39e1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e1f4) {
            ctx->pc = 0x39E288u;
            goto label_39e288;
        }
    }
    ctx->pc = 0x39E1FCu;
    // 0x39e1fc: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x39e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39e200: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x39e200u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e204: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x39E204u;
    SET_GPR_U32(ctx, 31, 0x39E20Cu);
    ctx->pc = 0x39E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E204u;
    // 0x39e208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x39E204u, 0x39E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E20Cu;
label_39e20c:
    // 0x39e20c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E20Cu;
    {
        const bool branch_taken_0x39e20c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x39E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E20Cu;
        // 0x39e210: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e20c) {
            ctx->pc = 0x39E220u;
            goto label_39e220;
        }
    }
    ctx->pc = 0x39E214u;
    // 0x39e214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39e218: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39E218u;
    {
        const bool branch_taken_0x39e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E218u;
        // 0x39e21c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e218) {
            ctx->pc = 0x39E238u;
            goto label_39e238;
        }
    }
    ctx->pc = 0x39E220u;
label_39e220:
    // 0x39e220: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x39e220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39e224: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39e224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39e228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39e228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39e22c: 0x0  nop
    ctx->pc = 0x39e22cu;
    // NOP
    // 0x39e230: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x39e234: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e238:
    // 0x39e238: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x39e238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x39e23c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x39e23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x39e240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39e244: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E244u;
    {
        const bool branch_taken_0x39e244 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x39E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E244u;
        // 0x39e248: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e244) {
            ctx->pc = 0x39E258u;
            goto label_39e258;
        }
    }
    ctx->pc = 0x39E24Cu;
    // 0x39e24c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x39e24cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39e250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39E250u;
    {
        const bool branch_taken_0x39e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E250u;
        // 0x39e254: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e250) {
            ctx->pc = 0x39E274u;
            goto label_39e274;
        }
    }
    ctx->pc = 0x39E258u;
label_39e258:
    // 0x39e258: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x39e258u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x39e25c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x39e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x39e260: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39e260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39e264: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39e264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39e268: 0x0  nop
    ctx->pc = 0x39e268u;
    // NOP
    // 0x39e26c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39e26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39e270: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x39e270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_39e274:
    // 0x39e274: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39e274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39e278: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x39E278u;
    {
        const bool branch_taken_0x39e278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E278u;
        // 0x39e27c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e278) {
            ctx->pc = 0x39E288u;
            goto label_39e288;
        }
    }
    ctx->pc = 0x39E280u;
    // 0x39e280: 0xa2032bec  sb          $v1, 0x2BEC($s0)
    ctx->pc = 0x39e280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11244), (uint8_t)GPR_U32(ctx, 3));
    // 0x39e284: 0x0  nop
    ctx->pc = 0x39e284u;
    // NOP
label_39e288:
    // 0x39e288: 0x92042bec  lbu         $a0, 0x2BEC($s0)
    ctx->pc = 0x39e288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11244)));
    // 0x39e28c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e290: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x39E290u;
    {
        const bool branch_taken_0x39e290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x39E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E290u;
        // 0x39e294: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e290) {
            ctx->pc = 0x39E2D0u;
            goto label_39e2d0;
        }
    }
    ctx->pc = 0x39E298u;
    // 0x39e298: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39E298u;
    {
        const bool branch_taken_0x39e298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39e298) {
            ctx->pc = 0x39E2C0u;
            goto label_39e2c0;
        }
    }
    ctx->pc = 0x39E2A0u;
    // 0x39e2a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E2A0u;
    {
        const bool branch_taken_0x39e2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e2a0) {
            ctx->pc = 0x39E2B0u;
            goto label_39e2b0;
        }
    }
    ctx->pc = 0x39E2A8u;
    // 0x39e2a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39E2A8u;
    {
        const bool branch_taken_0x39e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e2a8) {
            ctx->pc = 0x39E2E0u;
            goto label_39e2e0;
        }
    }
    ctx->pc = 0x39E2B0u;
label_39e2b0:
    // 0x39e2b0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x39e2b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x39e2b4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x39e2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x39e2b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39E2B8u;
    {
        const bool branch_taken_0x39e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2B8u;
        // 0x39e2bc: 0xa603078c  sh          $v1, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2b8) {
            ctx->pc = 0x39E2E0u;
            goto label_39e2e0;
        }
    }
    ctx->pc = 0x39E2C0u;
label_39e2c0:
    // 0x39e2c0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x39e2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x39e2c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x39e2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x39e2c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39E2C8u;
    {
        const bool branch_taken_0x39e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2C8u;
        // 0x39e2cc: 0xa603078c  sh          $v1, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2c8) {
            ctx->pc = 0x39E2E0u;
            goto label_39e2e0;
        }
    }
    ctx->pc = 0x39E2D0u;
label_39e2d0:
    // 0x39e2d0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x39e2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x39e2d4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x39e2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x39e2d8: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x39e2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x39e2dc: 0x0  nop
    ctx->pc = 0x39e2dcu;
    // NOP
label_39e2e0:
    // 0x39e2e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39e2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39e2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x39E2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2ECu;
        // 0x39e2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E2F4u;
}

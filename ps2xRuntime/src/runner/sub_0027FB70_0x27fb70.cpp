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

// Function: sub_0027FB70
// Address: 0x27fb70 - 0x27febc
void sub_0027FB70_0x27fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FB70_0x27fb70");
#endif

    switch (ctx->pc) {
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc40u: goto label_27fc40;
        case 0x27fc48u: goto label_27fc48;
        case 0x27fc58u: goto label_27fc58;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe14u: goto label_27fe14;
        default: break;
    }

    ctx->pc = 0x27fb70u;

    // 0x27fb70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27fb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fb78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27fb7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27fb80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27fb84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27fb84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27fb8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27fb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27fb94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27fb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27fb9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27fb9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27fba0: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x27fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x27fba4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27fba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x27fba8: 0xac8306ac  sw          $v1, 0x6AC($a0)
    ctx->pc = 0x27fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 3));
    // 0x27fbac: 0x8c8306b4  lw          $v1, 0x6B4($a0)
    ctx->pc = 0x27fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x27fbb0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27fbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x27fbb4: 0xac8306b4  sw          $v1, 0x6B4($a0)
    ctx->pc = 0x27fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 3));
    // 0x27fbb8: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x27fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x27fbbc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x27fbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x27fbc0: 0xac8306ac  sw          $v1, 0x6AC($a0)
    ctx->pc = 0x27fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 3));
    // 0x27fbc4: 0x8c8306b4  lw          $v1, 0x6B4($a0)
    ctx->pc = 0x27fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x27fbc8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x27fbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x27fbcc: 0xac8306b4  sw          $v1, 0x6B4($a0)
    ctx->pc = 0x27fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 3));
    // 0x27fbd0: 0x908307d6  lbu         $v1, 0x7D6($a0)
    ctx->pc = 0x27fbd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2006)));
    // 0x27fbd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FBD4u;
    {
        const bool branch_taken_0x27fbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBD4u;
        // 0x27fbd8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbd4) {
            ctx->pc = 0x27FBE8u;
            goto label_27fbe8;
        }
    }
    ctx->pc = 0x27FBDCu;
    // 0x27fbdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fbe0: 0xa28207d6  sb          $v0, 0x7D6($s4)
    ctx->pc = 0x27fbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2006), (uint8_t)GPR_U32(ctx, 2));
    // 0x27fbe4: 0x0  nop
    ctx->pc = 0x27fbe4u;
    // NOP
label_27fbe8:
    // 0x27fbe8: 0xae800834  sw          $zero, 0x834($s4)
    ctx->pc = 0x27fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2100), GPR_U32(ctx, 0));
    // 0x27fbec: 0x862800c2  lh          $t0, 0xC2($s1)
    ctx->pc = 0x27fbecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x27fbf0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27fbf4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x27fbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27fbf8: 0x26840530  addiu       $a0, $s4, 0x530
    ctx->pc = 0x27fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1328));
    // 0x27fbfc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x27fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x27fc00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27fc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27fc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fc08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27fc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fc10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27fc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fc14: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x27fc14u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27fc18: 0x0  nop
    ctx->pc = 0x27fc18u;
    // NOP
    // 0x27fc1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27fc1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27fc20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27fc20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27fc24: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x27fc24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27fc28: 0x0  nop
    ctx->pc = 0x27fc28u;
    // NOP
    // 0x27fc2c: 0x0  nop
    ctx->pc = 0x27fc2cu;
    // NOP
    // 0x27fc30: 0xc0b2a88  jal         func_2CAA20
    ctx->pc = 0x27FC30u;
    SET_GPR_U32(ctx, 31, 0x27FC38u);
    ctx->pc = 0x2CAA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA20u, 0x27FC30u, 0x27FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC38u;
label_27fc38:
    // 0x27fc38: 0xc04150c  jal         func_105430
    ctx->pc = 0x27FC38u;
    SET_GPR_U32(ctx, 31, 0x27FC40u);
    ctx->pc = 0x27FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC38u;
    // 0x27fc3c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x27FC38u, 0x27FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC40u;
label_27fc40:
    // 0x27fc40: 0xc09681c  jal         func_25A070
    ctx->pc = 0x27FC40u;
    SET_GPR_U32(ctx, 31, 0x27FC48u);
    ctx->pc = 0x27FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC40u;
    // 0x27fc44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x27FC40u, 0x27FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC48u;
label_27fc48:
    // 0x27fc48: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27fc4c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27fc4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27fc50: 0xc041588  jal         func_105620
    ctx->pc = 0x27FC50u;
    SET_GPR_U32(ctx, 31, 0x27FC58u);
    ctx->pc = 0x27FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC50u;
    // 0x27fc54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x27FC50u, 0x27FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC58u;
label_27fc58:
    // 0x27fc58: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x27fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc5c: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x27fc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x27fc60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27fc64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27fc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fc68: 0x0  nop
    ctx->pc = 0x27fc68u;
    // NOP
    // 0x27fc6c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x27fc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27fc70: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc74: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x27fc74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x27fc78: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x27fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc7c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x27fc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27fc80: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x27fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x27fc84: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fc88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27fc88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fc8c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27FC8Cu;
    {
        const bool branch_taken_0x27fc8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC8Cu;
        // 0x27fc90: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc8c) {
            ctx->pc = 0x27FCA8u;
            goto label_27fca8;
        }
    }
    ctx->pc = 0x27FC94u;
    // 0x27fc94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fc98: 0x0  nop
    ctx->pc = 0x27fc98u;
    // NOP
    // 0x27fc9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27fc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fca0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27fca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27fca4: 0x0  nop
    ctx->pc = 0x27fca4u;
    // NOP
label_27fca8:
    // 0x27fca8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27fcac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x27fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27fcb0: 0xc041442  jal         func_105108
    ctx->pc = 0x27FCB0u;
    SET_GPR_U32(ctx, 31, 0x27FCB8u);
    ctx->pc = 0x27FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCB0u;
    // 0x27fcb4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27FCB0u, 0x27FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCB8u;
label_27fcb8:
    // 0x27fcb8: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x27fcb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x27fcbc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27fcc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27fcc4: 0x24420b80  addiu       $v0, $v0, 0xB80
    ctx->pc = 0x27fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2944));
    // 0x27fcc8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x27fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x27fccc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x27fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27fcd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27fcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27fcd8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x27fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fcdc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x27FCDCu;
    SET_GPR_U32(ctx, 31, 0x27FCE4u);
    ctx->pc = 0x27FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCDCu;
    // 0x27fce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x27FCDCu, 0x27FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCE4u;
label_27fce4:
    // 0x27fce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fce8: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FCE8u;
    {
        const bool branch_taken_0x27fce8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x27FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCE8u;
        // 0x27fcec: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fce8) {
            ctx->pc = 0x27FD00u;
            goto label_27fd00;
        }
    }
    ctx->pc = 0x27FCF0u;
    // 0x27fcf0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27fcf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27fcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fcf8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x27FCF8u;
    SET_GPR_U32(ctx, 31, 0x27FD00u);
    ctx->pc = 0x27FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCF8u;
    // 0x27fcfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x27FCF8u, 0x27FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD00u;
label_27fd00:
    // 0x27fd00: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x27fd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x27fd04: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x27fd08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FD08u;
    {
        const bool branch_taken_0x27fd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD08u;
        // 0x27fd0c: 0x268407a0  addiu       $a0, $s4, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd08) {
            ctx->pc = 0x27FD28u;
            goto label_27fd28;
        }
    }
    ctx->pc = 0x27FD10u;
    // 0x27fd10: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x27fd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27fd14: 0xc0414ca  jal         func_105328
    ctx->pc = 0x27FD14u;
    SET_GPR_U32(ctx, 31, 0x27FD1Cu);
    ctx->pc = 0x27FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD14u;
    // 0x27fd18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x27FD14u, 0x27FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD1Cu;
label_27fd1c:
    // 0x27fd1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27FD1Cu;
    {
        const bool branch_taken_0x27fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fd1c) {
            ctx->pc = 0x27FD30u;
            goto label_27fd30;
        }
    }
    ctx->pc = 0x27FD24u;
    // 0x27fd24: 0x0  nop
    ctx->pc = 0x27fd24u;
    // NOP
label_27fd28:
    // 0x27fd28: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x27fd28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27fd2c: 0x7e8207a0  sq          $v0, 0x7A0($s4)
    ctx->pc = 0x27fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 1952), GPR_VEC(ctx, 2));
label_27fd30:
    // 0x27fd30: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x27fd30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x27fd34: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27fd38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fd3c: 0x24630b9b  addiu       $v1, $v1, 0xB9B
    ctx->pc = 0x27fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2971));
    // 0x27fd40: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x27fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x27fd44: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x27fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27fd48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27fd4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27fd50: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27fd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27fd54: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27FD54u;
    {
        const bool branch_taken_0x27fd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD54u;
        // 0x27fd58: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd54) {
            ctx->pc = 0x27FDB0u;
            goto label_27fdb0;
        }
    }
    ctx->pc = 0x27FD5Cu;
    // 0x27fd5c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x27fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x27fd60: 0xc0414d0  jal         func_105340
    ctx->pc = 0x27FD60u;
    SET_GPR_U32(ctx, 31, 0x27FD68u);
    ctx->pc = 0x27FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD60u;
    // 0x27fd64: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x27FD60u, 0x27FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD68u;
label_27fd68:
    // 0x27fd68: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x27fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd6c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x27FD6Cu;
    SET_GPR_U32(ctx, 31, 0x27FD74u);
    ctx->pc = 0x27FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD6Cu;
    // 0x27fd70: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x27FD6Cu, 0x27FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD74u;
label_27fd74:
    // 0x27fd74: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x27fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x27fd78: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27fd7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x27fd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27fd80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27fd84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fd88: 0x0  nop
    ctx->pc = 0x27fd88u;
    // NOP
    // 0x27fd8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27fd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27fd90: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27fd90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27fd94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27fd94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27fd98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27fd98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27fd9c: 0x0  nop
    ctx->pc = 0x27fd9cu;
    // NOP
    // 0x27fda0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27fda4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27fda4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27fda8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27fdac: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x27fdacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
label_27fdb0:
    // 0x27fdb0: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x27fdb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x27fdb4: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x27fdb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x27fdb8: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x27fdb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x27fdbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27fdc0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x27fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27fdc4: 0xaf918930  sw          $s1, -0x76D0($gp)
    ctx->pc = 0x27fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 17));
    // 0x27fdc8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27fdcc: 0xaf948934  sw          $s4, -0x76CC($gp)
    ctx->pc = 0x27fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 20));
    // 0x27fdd0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x27fdd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27fdd4: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x27fdd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x27fdd8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x27fdd8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x27fddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fde0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27fde4: 0xa7828938  sh          $v0, -0x76C8($gp)
    ctx->pc = 0x27fde4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936888), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fde8: 0xc096a08  jal         func_25A820
    ctx->pc = 0x27FDE8u;
    SET_GPR_U32(ctx, 31, 0x27FDF0u);
    ctx->pc = 0x27FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDE8u;
    // 0x27fdec: 0xe794893c  swc1        $f20, -0x76C4($gp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x27FDE8u, 0x27FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDF0u;
label_27fdf0:
    // 0x27fdf0: 0xa2820838  sb          $v0, 0x838($s4)
    ctx->pc = 0x27fdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2104), (uint8_t)GPR_U32(ctx, 2));
    // 0x27fdf4: 0xc096a00  jal         func_25A800
    ctx->pc = 0x27FDF4u;
    SET_GPR_U32(ctx, 31, 0x27FDFCu);
    ctx->pc = 0x27FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDF4u;
    // 0x27fdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A800u, 0x27FDF4u, 0x27FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDFCu;
label_27fdfc:
    // 0x27fdfc: 0x2603fc00  addiu       $v1, $s0, -0x400
    ctx->pc = 0x27fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x27fe00: 0xa2820839  sb          $v0, 0x839($s4)
    ctx->pc = 0x27fe00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2105), (uint8_t)GPR_U32(ctx, 2));
    // 0x27fe04: 0x30620fff  andi        $v0, $v1, 0xFFF
    ctx->pc = 0x27fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x27fe08: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x27fe08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27fe0c: 0xc096a00  jal         func_25A800
    ctx->pc = 0x27FE0Cu;
    SET_GPR_U32(ctx, 31, 0x27FE14u);
    ctx->pc = 0x27FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE0Cu;
    // 0x27fe10: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A800u, 0x27FE0Cu, 0x27FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE14u;
label_27fe14:
    // 0x27fe14: 0xa282083a  sb          $v0, 0x83A($s4)
    ctx->pc = 0x27fe14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2106), (uint8_t)GPR_U32(ctx, 2));
    // 0x27fe18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x27fe1c: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x27fe1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x27fe20: 0x24840b9b  addiu       $a0, $a0, 0xB9B
    ctx->pc = 0x27fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2971));
    // 0x27fe24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fe28: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x27fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x27fe2c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x27fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27fe30: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27fe34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27fe38: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27fe38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27fe3c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FE3Cu;
    {
        const bool branch_taken_0x27fe3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE3Cu;
        // 0x27fe40: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe3c) {
            ctx->pc = 0x27FE58u;
            goto label_27fe58;
        }
    }
    ctx->pc = 0x27FE44u;
    // 0x27fe44: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FE44u;
    {
        const bool branch_taken_0x27fe44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fe44) {
            ctx->pc = 0x27FE58u;
            goto label_27fe58;
        }
    }
    ctx->pc = 0x27FE4Cu;
    // 0x27fe4c: 0xae8007a0  sw          $zero, 0x7A0($s4)
    ctx->pc = 0x27fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 0));
    // 0x27fe50: 0xae8007a8  sw          $zero, 0x7A8($s4)
    ctx->pc = 0x27fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1960), GPR_U32(ctx, 0));
    // 0x27fe54: 0x0  nop
    ctx->pc = 0x27fe54u;
    // NOP
label_27fe58:
    // 0x27fe58: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x27fe58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x27fe5c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x27fe60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fe64: 0x24840b9b  addiu       $a0, $a0, 0xB9B
    ctx->pc = 0x27fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2971));
    // 0x27fe68: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x27fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x27fe6c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x27fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27fe70: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27fe74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27fe78: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27fe78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27fe7c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FE7Cu;
    {
        const bool branch_taken_0x27fe7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fe7c) {
            ctx->pc = 0x27FE90u;
            goto label_27fe90;
        }
    }
    ctx->pc = 0x27FE84u;
    // 0x27fe84: 0xae8007a0  sw          $zero, 0x7A0($s4)
    ctx->pc = 0x27fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 0));
    // 0x27fe88: 0xae8007a4  sw          $zero, 0x7A4($s4)
    ctx->pc = 0x27fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1956), GPR_U32(ctx, 0));
    // 0x27fe8c: 0xae8007a8  sw          $zero, 0x7A8($s4)
    ctx->pc = 0x27fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1960), GPR_U32(ctx, 0));
label_27fe90:
    // 0x27fe90: 0x266300a8  addiu       $v1, $s3, 0xA8
    ctx->pc = 0x27fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
    // 0x27fe94: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x27fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x27fe98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27fe98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27fe9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fea0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27fea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27fea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fea8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27fea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27feac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27feacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27feb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27feb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27feb4: 0x3e00008  jr          $ra
    ctx->pc = 0x27FEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEB4u;
        // 0x27feb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FEBCu;
}

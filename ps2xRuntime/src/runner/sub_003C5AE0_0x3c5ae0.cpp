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

// Function: sub_003C5AE0
// Address: 0x3c5ae0 - 0x3c5e98
void sub_003C5AE0_0x3c5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5AE0_0x3c5ae0");
#endif

    switch (ctx->pc) {
        case 0x3c5b08u: goto label_3c5b08;
        case 0x3c5bb8u: goto label_3c5bb8;
        case 0x3c5c00u: goto label_3c5c00;
        case 0x3c5c5cu: goto label_3c5c5c;
        case 0x3c5dc0u: goto label_3c5dc0;
        case 0x3c5e68u: goto label_3c5e68;
        default: break;
    }

    ctx->pc = 0x3c5ae0u;

    // 0x3c5ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c5ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c5ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c5aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c5af0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c5af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c5af8: 0x8e2505b0  lw          $a1, 0x5B0($s1)
    ctx->pc = 0x3c5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x3c5afc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c5b00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C5B00u;
    SET_GPR_U32(ctx, 31, 0x3C5B08u);
    ctx->pc = 0x3C5B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5B00u;
    // 0x3c5b04: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C5B00u, 0x3C5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5B08u;
label_3c5b08:
    // 0x3c5b08: 0x92240509  lbu         $a0, 0x509($s1)
    ctx->pc = 0x3c5b08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c5b0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c5b10: 0x108300db  beq         $a0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x3C5B10u;
    {
        const bool branch_taken_0x3c5b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B10u;
        // 0x3c5b14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b10) {
            ctx->pc = 0x3C5E80u;
            goto label_3c5e80;
        }
    }
    ctx->pc = 0x3C5B18u;
    // 0x3c5b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5b1c: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3C5B1Cu;
    {
        const bool branch_taken_0x3c5b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5b1c) {
            ctx->pc = 0x3C5C10u;
            goto label_3c5c10;
        }
    }
    ctx->pc = 0x3C5B24u;
    // 0x3c5b24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5B24u;
    {
        const bool branch_taken_0x3c5b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b24) {
            ctx->pc = 0x3C5B38u;
            goto label_3c5b38;
        }
    }
    ctx->pc = 0x3C5B2Cu;
    // 0x3c5b2c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3C5B2Cu;
    {
        const bool branch_taken_0x3c5b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5b2c) {
            ctx->pc = 0x3C5E80u;
            goto label_3c5e80;
        }
    }
    ctx->pc = 0x3C5B34u;
    // 0x3c5b34: 0x0  nop
    ctx->pc = 0x3c5b34u;
    // NOP
label_3c5b38:
    // 0x3c5b38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c5b3c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c5b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5b40: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x3c5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x3c5b44: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3c5b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c5b48: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c5b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c5b4c: 0x3c02413f  lui         $v0, 0x413F
    ctx->pc = 0x3c5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16703 << 16));
    // 0x3c5b50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c5b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5b58: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x3c5b58u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x3c5b5c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x3c5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x3c5b60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c5b60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c5b64: 0xe62205a0  swc1        $f2, 0x5A0($s1)
    ctx->pc = 0x3c5b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1440), bits); }
    // 0x3c5b68: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c5b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c5b70: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x3c5b70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x3c5b74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c5b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c5b78: 0xe62105a4  swc1        $f1, 0x5A4($s1)
    ctx->pc = 0x3c5b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1444), bits); }
    // 0x3c5b7c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c5b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5b80: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x3c5b80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x3c5b84: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3c5b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c5b88: 0xe62105a8  swc1        $f1, 0x5A8($s1)
    ctx->pc = 0x3c5b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    // 0x3c5b8c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c5b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5b90: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x3c5b90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x3c5b94: 0x0  nop
    ctx->pc = 0x3c5b94u;
    // NOP
    // 0x3c5b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c5b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c5b9c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C5B9Cu;
    {
        const bool branch_taken_0x3c5b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B9Cu;
        // 0x3c5ba0: 0xe62005ac  swc1        $f0, 0x5AC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b9c) {
            ctx->pc = 0x3C5BF8u;
            goto label_3c5bf8;
        }
    }
    ctx->pc = 0x3C5BA4u;
    // 0x3c5ba4: 0xa62000c0  sh          $zero, 0xC0($s1)
    ctx->pc = 0x3c5ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c5ba8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5bac: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x3c5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c5bb0: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3C5BB0u;
    SET_GPR_U32(ctx, 31, 0x3C5BB8u);
    ctx->pc = 0x3C5BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BB0u;
    // 0x3c5bb4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3C5BB0u, 0x3C5BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5BB8u;
label_3c5bb8:
    // 0x3c5bb8: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3c5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3c5bbc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3c5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3c5bc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c5bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c5bc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c5bc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c5bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5bcc: 0x0  nop
    ctx->pc = 0x3c5bccu;
    // NOP
    // 0x3c5bd0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c5bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c5bd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c5bd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c5bd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c5bdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c5bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c5be0: 0x0  nop
    ctx->pc = 0x3c5be0u;
    // NOP
    // 0x3c5be4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3c5be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c5be8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c5be8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c5bec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c5becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c5bf0: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x3c5bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5bf4: 0xa62000c4  sh          $zero, 0xC4($s1)
    ctx->pc = 0x3c5bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 0));
label_3c5bf8:
    // 0x3c5bf8: 0xc0f1a94  jal         func_3C6A50
    ctx->pc = 0x3C5BF8u;
    SET_GPR_U32(ctx, 31, 0x3C5C00u);
    ctx->pc = 0x3C5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5BF8u;
    // 0x3c5bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A50u, 0x3C5BF8u, 0x3C5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C00u;
label_3c5c00:
    // 0x3c5c00: 0xa2200507  sb          $zero, 0x507($s1)
    ctx->pc = 0x3c5c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c5c04: 0x92230509  lbu         $v1, 0x509($s1)
    ctx->pc = 0x3c5c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c5c08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c5c0c: 0xa2230509  sb          $v1, 0x509($s1)
    ctx->pc = 0x3c5c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1289), (uint8_t)GPR_U32(ctx, 3));
label_3c5c10:
    // 0x3c5c10: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3c5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3c5c14: 0xc6220570  lwc1        $f2, 0x570($s1)
    ctx->pc = 0x3c5c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5c18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5c1c: 0xc620056c  lwc1        $f0, 0x56C($s1)
    ctx->pc = 0x3c5c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5c20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c5c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c5c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5c28: 0x45000091  bc1f        . + 4 + (0x91 << 2)
    ctx->pc = 0x3C5C28u;
    {
        const bool branch_taken_0x3c5c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5c28) {
            ctx->pc = 0x3C5E70u;
            goto label_3c5e70;
        }
    }
    ctx->pc = 0x3C5C30u;
    // 0x3c5c30: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5C30u;
    {
        const bool branch_taken_0x3c5c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5c30) {
            ctx->pc = 0x3C5C50u;
            goto label_3c5c50;
        }
    }
    ctx->pc = 0x3C5C38u;
    // 0x3c5c38: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5c3c: 0x26230590  addiu       $v1, $s1, 0x590
    ctx->pc = 0x3c5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c5c40: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x3c5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c5c44: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c5c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c5c48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c5c4c: 0x0  nop
    ctx->pc = 0x3c5c4cu;
    // NOP
label_3c5c50:
    // 0x3c5c50: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c5c54: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3C5C54u;
    SET_GPR_U32(ctx, 31, 0x3C5C5Cu);
    ctx->pc = 0x3C5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C54u;
    // 0x3c5c58: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3C5C54u, 0x3C5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C5Cu;
label_3c5c5c:
    // 0x3c5c5c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3c5c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3c5c60: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3c5c64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c5c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c5c68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c5c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c5c6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c5c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5c70: 0x0  nop
    ctx->pc = 0x3c5c70u;
    // NOP
    // 0x3c5c74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c5c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c5c78: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x3c5c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3c5c7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c5c7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c5c80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5c80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c5c84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c5c88: 0x0  nop
    ctx->pc = 0x3c5c88u;
    // NOP
    // 0x3c5c8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c5c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c5c90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c5c90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c5c94: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c5c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c5c98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c5c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c5c9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c5c9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c5ca0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3c5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5ca4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c5ca8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3c5ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c5cac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c5cacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c5cb0: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x3c5cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3c5cb4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5CB4u;
    {
        const bool branch_taken_0x3c5cb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CB4u;
        // 0x3c5cb8: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cb4) {
            ctx->pc = 0x3C5CD0u;
            goto label_3c5cd0;
        }
    }
    ctx->pc = 0x3C5CBCu;
    // 0x3c5cbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c5cc0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3c5cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c5cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5CC4u;
    {
        const bool branch_taken_0x3c5cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CC4u;
        // 0x3c5cc8: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5cc4) {
            ctx->pc = 0x3C5CD0u;
            goto label_3c5cd0;
        }
    }
    ctx->pc = 0x3C5CCCu;
    // 0x3c5ccc: 0x0  nop
    ctx->pc = 0x3c5cccu;
    // NOP
label_3c5cd0:
    // 0x3c5cd0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x3c5cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c5cd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c5cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c5cd8: 0x28420555  slti        $v0, $v0, 0x555
    ctx->pc = 0x3c5cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3c5cdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5CDCu;
    {
        const bool branch_taken_0x3c5cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5cdc) {
            ctx->pc = 0x3C5CE8u;
            goto label_3c5ce8;
        }
    }
    ctx->pc = 0x3C5CE4u;
    // 0x3c5ce4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c5ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5ce8:
    // 0x3c5ce8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3c5cec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c5cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5cf0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3c5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3c5cf4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c5cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c5cf8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3c5cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3c5cfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5d00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c5d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c5d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c5d08: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c5d08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c5d0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c5d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c5d10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c5d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5d14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5D14u;
    {
        const bool branch_taken_0x3c5d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5d14) {
            ctx->pc = 0x3C5D2Cu;
            goto label_3c5d2c;
        }
    }
    ctx->pc = 0x3C5D1Cu;
    // 0x3c5d1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5d1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c5d20: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3c5d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c5d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5D24u;
    {
        const bool branch_taken_0x3c5d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D24u;
        // 0x3c5d28: 0x92250507  lbu         $a1, 0x507($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d24) {
            ctx->pc = 0x3C5D48u;
            goto label_3c5d48;
        }
    }
    ctx->pc = 0x3C5D2Cu;
label_3c5d2c:
    // 0x3c5d2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c5d2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c5d30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c5d34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5d34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c5d38: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3c5d38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c5d3c: 0x0  nop
    ctx->pc = 0x3c5d3cu;
    // NOP
    // 0x3c5d40: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3c5d40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3c5d44: 0x92250507  lbu         $a1, 0x507($s1)
    ctx->pc = 0x3c5d44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
label_3c5d48:
    // 0x3c5d48: 0x3c034463  lui         $v1, 0x4463
    ctx->pc = 0x3c5d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17507 << 16));
    // 0x3c5d4c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3c5d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3c5d50: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3c5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3c5d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c5d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c5d58: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x3c5d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x3c5d5c: 0x862200c0  lh          $v0, 0xC0($s1)
    ctx->pc = 0x3c5d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x3c5d60: 0x51b00  sll         $v1, $a1, 12
    ctx->pc = 0x3c5d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x3c5d64: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3c5d64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3c5d68: 0x0  nop
    ctx->pc = 0x3c5d68u;
    // NOP
    // 0x3c5d6c: 0x0  nop
    ctx->pc = 0x3c5d6cu;
    // NOP
    // 0x3c5d70: 0x1812  mflo        $v1
    ctx->pc = 0x3c5d70u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3c5d74: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c5d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c5d78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c5d78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c5d7c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c5d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c5d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c5d84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c5d88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3c5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5d8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c5d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c5d90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c5d94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c5d98: 0x0  nop
    ctx->pc = 0x3c5d98u;
    // NOP
    // 0x3c5d9c: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x3c5d9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c5da0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x3c5da0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x3c5da4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3c5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c5da8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c5dac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5DACu;
    {
        const bool branch_taken_0x3c5dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DACu;
        // 0x3c5db0: 0xa62200c0  sh          $v0, 0xC0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5dac) {
            ctx->pc = 0x3C5DC0u;
            goto label_3c5dc0;
        }
    }
    ctx->pc = 0x3C5DB4u;
    // 0x3c5db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c5db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5db8: 0xc0f1924  jal         func_3C6490
    ctx->pc = 0x3C5DB8u;
    SET_GPR_U32(ctx, 31, 0x3C5DC0u);
    ctx->pc = 0x3C5DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5DB8u;
    // 0x3c5dbc: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6490u, 0x3C5DB8u, 0x3C5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5DC0u;
label_3c5dc0:
    // 0x3c5dc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3c5dc4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c5dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c5dc8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x3c5dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3c5dcc: 0x862500c0  lh          $a1, 0xC0($s1)
    ctx->pc = 0x3c5dccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x3c5dd0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3c5dd0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3c5dd4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c5dd8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3c5dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3c5ddc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c5de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c5de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c5de4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5de8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3c5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c5dec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c5decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c5df0: 0xa62200c0  sh          $v0, 0xC0($s1)
    ctx->pc = 0x3c5df0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5df4: 0x92220507  lbu         $v0, 0x507($s1)
    ctx->pc = 0x3c5df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
    // 0x3c5df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c5dfc: 0xa2220507  sb          $v0, 0x507($s1)
    ctx->pc = 0x3c5dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c5e00: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3c5e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5e04: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3c5e04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c5e08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c5e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c5e0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c5e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5e10: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5E10u;
    {
        const bool branch_taken_0x3c5e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5e10) {
            ctx->pc = 0x3C5E28u;
            goto label_3c5e28;
        }
    }
    ctx->pc = 0x3C5E18u;
    // 0x3c5e18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5e18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c5e1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c5e1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c5e20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5E20u;
    {
        const bool branch_taken_0x3c5e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E20u;
        // 0x3c5e24: 0x92220507  lbu         $v0, 0x507($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e20) {
            ctx->pc = 0x3C5E44u;
            goto label_3c5e44;
        }
    }
    ctx->pc = 0x3C5E28u;
label_3c5e28:
    // 0x3c5e28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c5e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c5e2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c5e30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c5e34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c5e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c5e38: 0x0  nop
    ctx->pc = 0x3c5e38u;
    // NOP
    // 0x3c5e3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c5e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c5e40: 0x92220507  lbu         $v0, 0x507($s1)
    ctx->pc = 0x3c5e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
label_3c5e44:
    // 0x3c5e44: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3c5e44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c5e48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5E48u;
    {
        const bool branch_taken_0x3c5e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5e48) {
            ctx->pc = 0x3C5E58u;
            goto label_3c5e58;
        }
    }
    ctx->pc = 0x3C5E50u;
    // 0x3c5e50: 0xa2200507  sb          $zero, 0x507($s1)
    ctx->pc = 0x3c5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c5e54: 0x0  nop
    ctx->pc = 0x3c5e54u;
    // NOP
label_3c5e58:
    // 0x3c5e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5e60: 0xc0f196c  jal         func_3C65B0
    ctx->pc = 0x3C5E60u;
    SET_GPR_U32(ctx, 31, 0x3C5E68u);
    ctx->pc = 0x3C5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E60u;
    // 0x3c5e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C65B0u, 0x3C5E60u, 0x3C5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E68u;
label_3c5e68:
    // 0x3c5e68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5E68u;
    {
        const bool branch_taken_0x3c5e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5e68) {
            ctx->pc = 0x3C5E80u;
            goto label_3c5e80;
        }
    }
    ctx->pc = 0x3C5E70u;
label_3c5e70:
    // 0x3c5e70: 0x92230509  lbu         $v1, 0x509($s1)
    ctx->pc = 0x3c5e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c5e74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c5e78: 0xa2230509  sb          $v1, 0x509($s1)
    ctx->pc = 0x3c5e78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1289), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c5e7c: 0x0  nop
    ctx->pc = 0x3c5e7cu;
    // NOP
label_3c5e80:
    // 0x3c5e80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c5e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5e84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c5e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5e90: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E90u;
        // 0x3c5e94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5E98u;
}

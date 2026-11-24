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

// Function: sub_002ACFF0
// Address: 0x2acff0 - 0x2ad1e8
void sub_002ACFF0_0x2acff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACFF0_0x2acff0");
#endif

    switch (ctx->pc) {
        case 0x2ad028u: goto label_2ad028;
        case 0x2ad124u: goto label_2ad124;
        case 0x2ad13cu: goto label_2ad13c;
        case 0x2ad194u: goto label_2ad194;
        case 0x2ad1acu: goto label_2ad1ac;
        default: break;
    }

    ctx->pc = 0x2acff0u;

    // 0x2acff0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2acff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2acff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2acff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2acff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2acffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad008: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2ad008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ad00c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ad00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad010: 0x7c820870  sq          $v0, 0x870($a0)
    ctx->pc = 0x2ad010u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 2));
    // 0x2ad014: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2ad014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ad018: 0x7c820890  sq          $v0, 0x890($a0)
    ctx->pc = 0x2ad018u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 2));
    // 0x2ad01c: 0x26450870  addiu       $a1, $s2, 0x870
    ctx->pc = 0x2ad01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
    // 0x2ad020: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2AD020u;
    SET_GPR_U32(ctx, 31, 0x2AD028u);
    ctx->pc = 0x2AD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD020u;
    // 0x2ad024: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2AD020u, 0x2AD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD028u;
label_2ad028:
    // 0x2ad028: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2ad028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2ad02c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2ad030: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ad030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad034: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ad034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2ad038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad03c: 0x0  nop
    ctx->pc = 0x2ad03cu;
    // NOP
    // 0x2ad040: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ad040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ad044: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ad044u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ad048: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ad04c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ad04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ad050: 0x0  nop
    ctx->pc = 0x2ad050u;
    // NOP
    // 0x2ad054: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ad054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ad058: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ad058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ad05c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2ad05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2ad060: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD060u;
    {
        const bool branch_taken_0x2ad060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD060u;
        // 0x2ad064: 0xa64208a0  sh          $v0, 0x8A0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2208), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad060) {
            ctx->pc = 0x2AD080u;
            goto label_2ad080;
        }
    }
    ctx->pc = 0x2AD068u;
    // 0x2ad068: 0xc6410874  lwc1        $f1, 0x874($s2)
    ctx->pc = 0x2ad068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad06c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ad06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ad070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad074: 0x0  nop
    ctx->pc = 0x2ad074u;
    // NOP
    // 0x2ad078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ad078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ad07c: 0xe6400894  swc1        $f0, 0x894($s2)
    ctx->pc = 0x2ad07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2196), bits); }
label_2ad080:
    // 0x2ad080: 0xc6410874  lwc1        $f1, 0x874($s2)
    ctx->pc = 0x2ad080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad084: 0xc6400894  lwc1        $f0, 0x894($s2)
    ctx->pc = 0x2ad084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad088: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ad088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ad08c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2AD08Cu;
    {
        const bool branch_taken_0x2ad08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad08c) {
            ctx->pc = 0x2AD0B8u;
            goto label_2ad0b8;
        }
    }
    ctx->pc = 0x2AD094u;
    // 0x2ad094: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD094u;
    {
        const bool branch_taken_0x2ad094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD094u;
        // 0x2ad098: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad094) {
            ctx->pc = 0x2AD0A8u;
            goto label_2ad0a8;
        }
    }
    ctx->pc = 0x2AD09Cu;
    // 0x2ad09c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AD09Cu;
    {
        const bool branch_taken_0x2ad09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD09Cu;
        // 0x2ad0a0: 0xa2420822  sb          $v0, 0x822($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad09c) {
            ctx->pc = 0x2AD0D0u;
            goto label_2ad0d0;
        }
    }
    ctx->pc = 0x2AD0A4u;
    // 0x2ad0a4: 0x0  nop
    ctx->pc = 0x2ad0a4u;
    // NOP
label_2ad0a8:
    // 0x2ad0a8: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x2ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x2ad0ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD0ACu;
    {
        const bool branch_taken_0x2ad0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0ACu;
        // 0x2ad0b0: 0xa2420822  sb          $v0, 0x822($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0ac) {
            ctx->pc = 0x2AD0D0u;
            goto label_2ad0d0;
        }
    }
    ctx->pc = 0x2AD0B4u;
    // 0x2ad0b4: 0x0  nop
    ctx->pc = 0x2ad0b4u;
    // NOP
label_2ad0b8:
    // 0x2ad0b8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD0B8u;
    {
        const bool branch_taken_0x2ad0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B8u;
        // 0x2ad0bc: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0b8) {
            ctx->pc = 0x2AD0C8u;
            goto label_2ad0c8;
        }
    }
    ctx->pc = 0x2AD0C0u;
    // 0x2ad0c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD0C0u;
    {
        const bool branch_taken_0x2ad0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0C0u;
        // 0x2ad0c4: 0xa2420822  sb          $v0, 0x822($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0c0) {
            ctx->pc = 0x2AD0D0u;
            goto label_2ad0d0;
        }
    }
    ctx->pc = 0x2AD0C8u;
label_2ad0c8:
    // 0x2ad0c8: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x2ad0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x2ad0cc: 0xa2420822  sb          $v0, 0x822($s2)
    ctx->pc = 0x2ad0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2082), (uint8_t)GPR_U32(ctx, 2));
label_2ad0d0:
    // 0x2ad0d0: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x2ad0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2ad0d4: 0xa2420780  sb          $v0, 0x780($s2)
    ctx->pc = 0x2ad0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ad0d8: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x2ad0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2ad0dc: 0x7a430870  lq          $v1, 0x870($s2)
    ctx->pc = 0x2ad0dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 2160)));
    // 0x2ad0e0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ad0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ad0e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad0e8: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x2ad0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2ad0ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ad0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad0f0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ad0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ad0f4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2ad0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ad0f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad0fc: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2ad0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2ad100: 0x7a420870  lq          $v0, 0x870($s2)
    ctx->pc = 0x2ad100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 2160)));
    // 0x2ad104: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2ad104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2ad108: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2ad108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad10c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad110: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2ad110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2ad114: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ad114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad118: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ad118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ad11c: 0xc0ab33c  jal         func_2ACCF0
    ctx->pc = 0x2AD11Cu;
    SET_GPR_U32(ctx, 31, 0x2AD124u);
    ctx->pc = 0x2AD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD11Cu;
    // 0x2ad120: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF0u, 0x2AD11Cu, 0x2AD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD124u;
label_2ad124:
    // 0x2ad124: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ad124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ad128: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ad128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ad12c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ad12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ad130: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2ad130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2ad134: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x2AD134u;
    SET_GPR_U32(ctx, 31, 0x2AD13Cu);
    ctx->pc = 0x2AD138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD134u;
    // 0x2ad138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x2AD134u, 0x2AD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD13Cu;
label_2ad13c:
    // 0x2ad13c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD13Cu;
    {
        const bool branch_taken_0x2ad13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad13c) {
            ctx->pc = 0x2AD150u;
            goto label_2ad150;
        }
    }
    ctx->pc = 0x2AD144u;
    // 0x2ad144: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2ad144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad148: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2ad148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ad14c: 0x0  nop
    ctx->pc = 0x2ad14cu;
    // NOP
label_2ad150:
    // 0x2ad150: 0x7a430890  lq          $v1, 0x890($s2)
    ctx->pc = 0x2ad150u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 2192)));
    // 0x2ad154: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ad158: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ad158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ad15c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ad15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad160: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ad160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ad164: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2ad164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ad168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad16c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2ad16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2ad170: 0x7a420890  lq          $v0, 0x890($s2)
    ctx->pc = 0x2ad170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 2192)));
    // 0x2ad174: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2ad174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2ad178: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2ad178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad17c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad180: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2ad180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2ad184: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ad184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad188: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ad188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ad18c: 0xc0ab33c  jal         func_2ACCF0
    ctx->pc = 0x2AD18Cu;
    SET_GPR_U32(ctx, 31, 0x2AD194u);
    ctx->pc = 0x2AD190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD18Cu;
    // 0x2ad190: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF0u, 0x2AD18Cu, 0x2AD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD194u;
label_2ad194:
    // 0x2ad194: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ad194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ad198: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ad19c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ad19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ad1a0: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2ad1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2ad1a4: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x2AD1A4u;
    SET_GPR_U32(ctx, 31, 0x2AD1ACu);
    ctx->pc = 0x2AD1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD1A4u;
    // 0x2ad1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x2AD1A4u, 0x2AD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD1ACu;
label_2ad1ac:
    // 0x2ad1ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD1ACu;
    {
        const bool branch_taken_0x2ad1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad1ac) {
            ctx->pc = 0x2AD1C0u;
            goto label_2ad1c0;
        }
    }
    ctx->pc = 0x2AD1B4u;
    // 0x2ad1b4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2ad1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad1b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ad1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ad1bc: 0x0  nop
    ctx->pc = 0x2ad1bcu;
    // NOP
label_2ad1c0:
    // 0x2ad1c0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2ad1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad1c4: 0xe6400874  swc1        $f0, 0x874($s2)
    ctx->pc = 0x2ad1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2164), bits); }
    // 0x2ad1c8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2ad1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad1cc: 0xe6400894  swc1        $f0, 0x894($s2)
    ctx->pc = 0x2ad1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2196), bits); }
    // 0x2ad1d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ad1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad1d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1E0u;
        // 0x2ad1e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD1E8u;
}

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

// Function: sub_003468F0
// Address: 0x3468f0 - 0x346a10
void sub_003468F0_0x3468f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003468F0_0x3468f0");
#endif

    switch (ctx->pc) {
        case 0x3468f0u: goto label_3468f0;
        case 0x3468f4u: goto label_3468f4;
        case 0x3468f8u: goto label_3468f8;
        case 0x3468fcu: goto label_3468fc;
        case 0x346900u: goto label_346900;
        case 0x346904u: goto label_346904;
        case 0x346908u: goto label_346908;
        case 0x34690cu: goto label_34690c;
        case 0x346910u: goto label_346910;
        case 0x346914u: goto label_346914;
        case 0x346918u: goto label_346918;
        case 0x34691cu: goto label_34691c;
        case 0x346920u: goto label_346920;
        case 0x346924u: goto label_346924;
        case 0x346928u: goto label_346928;
        case 0x34692cu: goto label_34692c;
        case 0x346930u: goto label_346930;
        case 0x346934u: goto label_346934;
        case 0x346938u: goto label_346938;
        case 0x34693cu: goto label_34693c;
        case 0x346940u: goto label_346940;
        case 0x346944u: goto label_346944;
        case 0x346948u: goto label_346948;
        case 0x34694cu: goto label_34694c;
        case 0x346950u: goto label_346950;
        case 0x346954u: goto label_346954;
        case 0x346958u: goto label_346958;
        case 0x34695cu: goto label_34695c;
        case 0x346960u: goto label_346960;
        case 0x346964u: goto label_346964;
        case 0x346968u: goto label_346968;
        case 0x34696cu: goto label_34696c;
        case 0x346970u: goto label_346970;
        case 0x346974u: goto label_346974;
        case 0x346978u: goto label_346978;
        case 0x34697cu: goto label_34697c;
        case 0x346980u: goto label_346980;
        case 0x346984u: goto label_346984;
        case 0x346988u: goto label_346988;
        case 0x34698cu: goto label_34698c;
        case 0x346990u: goto label_346990;
        case 0x346994u: goto label_346994;
        case 0x346998u: goto label_346998;
        case 0x34699cu: goto label_34699c;
        case 0x3469a0u: goto label_3469a0;
        case 0x3469a4u: goto label_3469a4;
        case 0x3469a8u: goto label_3469a8;
        case 0x3469acu: goto label_3469ac;
        case 0x3469b0u: goto label_3469b0;
        case 0x3469b4u: goto label_3469b4;
        case 0x3469b8u: goto label_3469b8;
        case 0x3469bcu: goto label_3469bc;
        case 0x3469c0u: goto label_3469c0;
        case 0x3469c4u: goto label_3469c4;
        case 0x3469c8u: goto label_3469c8;
        case 0x3469ccu: goto label_3469cc;
        case 0x3469d0u: goto label_3469d0;
        case 0x3469d4u: goto label_3469d4;
        case 0x3469d8u: goto label_3469d8;
        case 0x3469dcu: goto label_3469dc;
        case 0x3469e0u: goto label_3469e0;
        case 0x3469e4u: goto label_3469e4;
        case 0x3469e8u: goto label_3469e8;
        case 0x3469ecu: goto label_3469ec;
        case 0x3469f0u: goto label_3469f0;
        case 0x3469f4u: goto label_3469f4;
        case 0x3469f8u: goto label_3469f8;
        case 0x3469fcu: goto label_3469fc;
        case 0x346a00u: goto label_346a00;
        case 0x346a04u: goto label_346a04;
        case 0x346a08u: goto label_346a08;
        case 0x346a0cu: goto label_346a0c;
        default: break;
    }

    ctx->pc = 0x3468f0u;

label_3468f0:
    // 0x3468f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3468f4:
    // 0x3468f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3468f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3468f8:
    // 0x3468f8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3468f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3468fc:
    // 0x3468fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3468fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_346900:
    // 0x346900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346904:
    // 0x346904: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x346904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_346908:
    // 0x346908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34690c:
    // 0x34690c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34690cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346910:
    // 0x346910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346914:
    // 0x346914: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x346914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_346918:
    // 0x346918: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x346918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34691c:
    // 0x34691c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_346920:
    // 0x346920: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x346920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346924:
    // 0x346924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346928:
    // 0x346928: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x346928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34692c:
    // 0x34692c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x34692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346930:
    // 0x346930: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_346934:
    // 0x346934: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x346934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346938:
    // 0x346938: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_34693c:
    // 0x34693c: 0xc0a4408  jal         func_291020
label_346940:
    if (ctx->pc == 0x346940u) {
        ctx->pc = 0x346940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34693Cu;
        // 0x346940: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346944u;
        goto label_346944;
    }
    ctx->pc = 0x34693Cu;
    SET_GPR_U32(ctx, 31, 0x346944u);
    ctx->pc = 0x346940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34693Cu;
    // 0x346940: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x34693Cu, 0x346944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346944u;
label_346944:
    // 0x346944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346948:
    // 0x346948: 0xc0a43fc  jal         func_290FF0
label_34694c:
    if (ctx->pc == 0x34694Cu) {
        ctx->pc = 0x34694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346948u;
        // 0x34694c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346950u;
        goto label_346950;
    }
    ctx->pc = 0x346948u;
    SET_GPR_U32(ctx, 31, 0x346950u);
    ctx->pc = 0x34694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346948u;
    // 0x34694c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x346948u, 0x346950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346950u;
label_346950:
    // 0x346950: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x346950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_346954:
    // 0x346954: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x346954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_346958:
    // 0x346958: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x346958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34695c:
    // 0x34695c: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x34695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_346960:
    // 0x346960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346964:
    // 0x346964: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x346964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_346968:
    // 0x346968: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x346968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_34696c:
    // 0x34696c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34696cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346970:
    // 0x346970: 0xc0510e0  jal         func_144380
label_346974:
    if (ctx->pc == 0x346974u) {
        ctx->pc = 0x346974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346970u;
        // 0x346974: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346978u;
        goto label_346978;
    }
    ctx->pc = 0x346970u;
    SET_GPR_U32(ctx, 31, 0x346978u);
    ctx->pc = 0x346974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346970u;
    // 0x346974: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x346970u, 0x346978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346978u;
label_346978:
    // 0x346978: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x346978u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34697c:
    // 0x34697c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34697cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346980:
    // 0x346980: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x346980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_346984:
    // 0x346984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346988:
    // 0x346988: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x346988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34698c:
    // 0x34698c: 0x24050208  addiu       $a1, $zero, 0x208
    ctx->pc = 0x34698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_346990:
    // 0x346990: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x346990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_346994:
    // 0x346994: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x346994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_346998:
    // 0x346998: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x346998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_34699c:
    // 0x34699c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x34699cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3469a0:
    // 0x3469a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3469a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3469a4:
    // 0x3469a4: 0x0  nop
    ctx->pc = 0x3469a4u;
    // NOP
label_3469a8:
    // 0x3469a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3469a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3469ac:
    // 0x3469ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3469acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3469b0:
    // 0x3469b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3469b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3469b4:
    // 0x3469b4: 0x0  nop
    ctx->pc = 0x3469b4u;
    // NOP
label_3469b8:
    // 0x3469b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3469b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3469bc:
    // 0x3469bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3469bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3469c0:
    // 0x3469c0: 0xc0d0484  jal         func_341210
label_3469c4:
    if (ctx->pc == 0x3469C4u) {
        ctx->pc = 0x3469C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469C0u;
        // 0x3469c4: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3469C8u;
        goto label_3469c8;
    }
    ctx->pc = 0x3469C0u;
    SET_GPR_U32(ctx, 31, 0x3469C8u);
    ctx->pc = 0x3469C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469C0u;
    // 0x3469c4: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3469C0u, 0x3469C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469C8u;
label_3469c8:
    // 0x3469c8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3469c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3469cc:
    // 0x3469cc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3469ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3469d0:
    // 0x3469d0: 0x320f809  jalr        $t9
label_3469d4:
    if (ctx->pc == 0x3469D4u) {
        ctx->pc = 0x3469D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469D0u;
        // 0x3469d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3469D8u;
        goto label_3469d8;
    }
    ctx->pc = 0x3469D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3469D8u);
        ctx->pc = 0x3469D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469D0u;
        // 0x3469d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3469D0u, 0x3469D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3469D8u;
label_3469d8:
    // 0x3469d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3469d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3469dc:
    // 0x3469dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3469dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3469e0:
    // 0x3469e0: 0xc0d0490  jal         func_341240
label_3469e4:
    if (ctx->pc == 0x3469E4u) {
        ctx->pc = 0x3469E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469E0u;
        // 0x3469e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3469E8u;
        goto label_3469e8;
    }
    ctx->pc = 0x3469E0u;
    SET_GPR_U32(ctx, 31, 0x3469E8u);
    ctx->pc = 0x3469E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469E0u;
    // 0x3469e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x3469E0u, 0x3469E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469E8u;
label_3469e8:
    // 0x3469e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3469e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3469ec:
    // 0x3469ec: 0xc0e4580  jal         func_391600
label_3469f0:
    if (ctx->pc == 0x3469F0u) {
        ctx->pc = 0x3469F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469ECu;
        // 0x3469f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3469F4u;
        goto label_3469f4;
    }
    ctx->pc = 0x3469ECu;
    SET_GPR_U32(ctx, 31, 0x3469F4u);
    ctx->pc = 0x3469F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469ECu;
    // 0x3469f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391600u, 0x3469ECu, 0x3469F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469F4u;
label_3469f4:
    // 0x3469f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3469f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3469f8:
    // 0x3469f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3469f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3469fc:
    // 0x3469fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3469fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_346a00:
    // 0x346a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346a04:
    // 0x346a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346a08:
    // 0x346a08: 0x3e00008  jr          $ra
label_346a0c:
    if (ctx->pc == 0x346A0Cu) {
        ctx->pc = 0x346A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A08u;
        // 0x346a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346A10u;
        goto label_fallthrough_0x346a08;
    }
    ctx->pc = 0x346A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A08u;
        // 0x346a0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346a08:
    ctx->pc = 0x346A10u;
}

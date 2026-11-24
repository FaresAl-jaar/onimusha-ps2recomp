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

// Function: sub_003EF090
// Address: 0x3ef090 - 0x3ef474
void sub_003EF090_0x3ef090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF090_0x3ef090");
#endif

    switch (ctx->pc) {
        case 0x3ef180u: goto label_3ef180;
        case 0x3ef190u: goto label_3ef190;
        case 0x3ef1a0u: goto label_3ef1a0;
        case 0x3ef1acu: goto label_3ef1ac;
        case 0x3ef1e4u: goto label_3ef1e4;
        case 0x3ef1f0u: goto label_3ef1f0;
        case 0x3ef200u: goto label_3ef200;
        case 0x3ef258u: goto label_3ef258;
        case 0x3ef26cu: goto label_3ef26c;
        case 0x3ef290u: goto label_3ef290;
        case 0x3ef29cu: goto label_3ef29c;
        case 0x3ef2c8u: goto label_3ef2c8;
        case 0x3ef340u: goto label_3ef340;
        case 0x3ef350u: goto label_3ef350;
        case 0x3ef420u: goto label_3ef420;
        case 0x3ef430u: goto label_3ef430;
        default: break;
    }

    ctx->pc = 0x3ef090u;

    // 0x3ef090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ef090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ef094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ef094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ef098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ef098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ef09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ef09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ef0a0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ef0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ef0a4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3ef0a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3ef0a8: 0x102000ed  beqz        $at, . + 4 + (0xED << 2)
    ctx->pc = 0x3EF0A8u;
    {
        const bool branch_taken_0x3ef0a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0A8u;
        // 0x3ef0ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef0a8) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF0B0u;
    // 0x3ef0b0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3ef0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3ef0b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ef0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ef0b8: 0x248459d0  addiu       $a0, $a0, 0x59D0
    ctx->pc = 0x3ef0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22992));
    // 0x3ef0bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ef0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ef0c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ef0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ef0c4: 0x600008  jr          $v1
    ctx->pc = 0x3EF0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EF0D0u: goto label_3ef0d0;
            case 0x3EF1E8u: goto label_3ef1e8;
            case 0x3EF238u: goto label_3ef238;
            case 0x3EF280u: goto label_3ef280;
            case 0x3EF338u: goto label_3ef338;
            case 0x3EF3B0u: goto label_3ef3b0;
            case 0x3EF418u: goto label_3ef418;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF0C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EF0CCu;
    // 0x3ef0cc: 0x0  nop
    ctx->pc = 0x3ef0ccu;
    // NOP
label_3ef0d0:
    // 0x3ef0d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ef0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ef0d4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x3ef0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3ef0d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3ef0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3ef0dc: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x3ef0dcu;
    { uint32_t bits = FAST_READ32(0x660090u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ef0e0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3ef0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3ef0e4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3ef0e4u;
    { uint32_t bits = FAST_READ32(0x660094u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ef0e8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x3ef0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3ef0ec: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3ef0ecu;
    { uint32_t bits = FAST_READ32(0x660098u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef0f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3ef0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ef0f4: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x3ef0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x3ef0f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ef0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ef0fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ef0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ef100: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x3ef100u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ef104: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ef104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ef108: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x3ef108u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ef10c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3ef10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ef110: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x3ef110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ef114: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ef114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ef118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ef118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ef11c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ef11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ef120: 0xa60807f2  sh          $t0, 0x7F2($s0)
    ctx->pc = 0x3ef120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 8));
    // 0x3ef124: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ef124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ef128: 0xa20707f5  sb          $a3, 0x7F5($s0)
    ctx->pc = 0x3ef128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 7));
    // 0x3ef12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ef12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ef130: 0xae0607ec  sw          $a2, 0x7EC($s0)
    ctx->pc = 0x3ef130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 6));
    // 0x3ef134: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3ef134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ef138: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ef138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef13c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ef13cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ef140: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ef140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ef144: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ef148: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF148u;
    {
        const bool branch_taken_0x3ef148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef148) {
            ctx->pc = 0x3EF160u;
            goto label_3ef160;
        }
    }
    ctx->pc = 0x3EF150u;
    // 0x3ef150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef154: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3ef154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ef158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EF158u;
    {
        const bool branch_taken_0x3ef158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF158u;
        // 0x3ef15c: 0xa6022b30  sh          $v0, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef158) {
            ctx->pc = 0x3EF178u;
            goto label_3ef178;
        }
    }
    ctx->pc = 0x3EF160u;
label_3ef160:
    // 0x3ef160: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ef160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ef164: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef168: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3ef168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ef16c: 0x0  nop
    ctx->pc = 0x3ef16cu;
    // NOP
    // 0x3ef170: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ef170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3ef174: 0xa6022b30  sh          $v0, 0x2B30($s0)
    ctx->pc = 0x3ef174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
label_3ef178:
    // 0x3ef178: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EF178u;
    SET_GPR_U32(ctx, 31, 0x3EF180u);
    ctx->pc = 0x3EF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF178u;
    // 0x3ef17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EF178u, 0x3EF180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF180u;
label_3ef180:
    // 0x3ef180: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3EF180u;
    {
        const bool branch_taken_0x3ef180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF180u;
        // 0x3ef184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef180) {
            ctx->pc = 0x3EF1E8u;
            goto label_3ef1e8;
        }
    }
    ctx->pc = 0x3EF188u;
    // 0x3ef188: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EF188u;
    SET_GPR_U32(ctx, 31, 0x3EF190u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EF188u, 0x3EF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF190u;
label_3ef190:
    // 0x3ef190: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3ef190u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ef194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ef194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef198: 0xc0aacd0  jal         func_2AB340
    ctx->pc = 0x3EF198u;
    SET_GPR_U32(ctx, 31, 0x3EF1A0u);
    ctx->pc = 0x3EF19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF198u;
    // 0x3ef19c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB340u, 0x3EF198u, 0x3EF1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF1A0u;
label_3ef1a0:
    // 0x3ef1a0: 0x8e042950  lw          $a0, 0x2950($s0)
    ctx->pc = 0x3ef1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    // 0x3ef1a4: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EF1A4u;
    SET_GPR_U32(ctx, 31, 0x3EF1ACu);
    ctx->pc = 0x3EF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF1A4u;
    // 0x3ef1a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EF1A4u, 0x3EF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF1ACu;
label_3ef1ac:
    // 0x3ef1ac: 0xae112950  sw          $s1, 0x2950($s0)
    ctx->pc = 0x3ef1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10576), GPR_U32(ctx, 17));
    // 0x3ef1b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ef1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ef1b4: 0x86032b2c  lh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3ef1b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ef1b8: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x3ef1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x3ef1bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ef1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ef1c0: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3ef1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3ef1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ef1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1c8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3ef1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ef1cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ef1ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ef1d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ef1d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ef1d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1dc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EF1DCu;
    SET_GPR_U32(ctx, 31, 0x3EF1E4u);
    ctx->pc = 0x3EF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF1DCu;
    // 0x3ef1e0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EF1DCu, 0x3EF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF1E4u;
label_3ef1e4:
    // 0x3ef1e4: 0x0  nop
    ctx->pc = 0x3ef1e4u;
    // NOP
label_3ef1e8:
    // 0x3ef1e8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EF1E8u;
    SET_GPR_U32(ctx, 31, 0x3EF1F0u);
    ctx->pc = 0x3EF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF1E8u;
    // 0x3ef1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EF1E8u, 0x3EF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF1F0u;
label_3ef1f0:
    // 0x3ef1f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF1F0u;
    {
        const bool branch_taken_0x3ef1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1F0u;
        // 0x3ef1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1f0) {
            ctx->pc = 0x3EF208u;
            goto label_3ef208;
        }
    }
    ctx->pc = 0x3EF1F8u;
    // 0x3ef1f8: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EF1F8u;
    SET_GPR_U32(ctx, 31, 0x3EF200u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EF1F8u, 0x3EF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF200u;
label_3ef200:
    // 0x3ef200: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3EF200u;
    {
        const bool branch_taken_0x3ef200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef200) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF208u;
label_3ef208:
    // 0x3ef208: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef20c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF20Cu;
    {
        const bool branch_taken_0x3ef20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef20c) {
            ctx->pc = 0x3EF220u;
            goto label_3ef220;
        }
    }
    ctx->pc = 0x3EF214u;
    // 0x3ef214: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ef214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ef218: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef21c: 0x0  nop
    ctx->pc = 0x3ef21cu;
    // NOP
label_3ef220:
    // 0x3ef220: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef224: 0x1c60008e  bgtz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x3EF224u;
    {
        const bool branch_taken_0x3ef224 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF224u;
        // 0x3ef228: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef224) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF22Cu;
    // 0x3ef22c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3EF22Cu;
    {
        const bool branch_taken_0x3ef22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF22Cu;
        // 0x3ef230: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef22c) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF234u;
    // 0x3ef234: 0x0  nop
    ctx->pc = 0x3ef234u;
    // NOP
label_3ef238:
    // 0x3ef238: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3ef238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3ef23c: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x3ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x3ef240: 0x3442f4f6  ori         $v0, $v0, 0xF4F6
    ctx->pc = 0x3ef240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62710);
    // 0x3ef244: 0x7e032b70  sq          $v1, 0x2B70($s0)
    ctx->pc = 0x3ef244u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11120), GPR_VEC(ctx, 3));
    // 0x3ef248: 0xae022b74  sw          $v0, 0x2B74($s0)
    ctx->pc = 0x3ef248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11124), GPR_U32(ctx, 2));
    // 0x3ef24c: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3ef24cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3ef250: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EF250u;
    SET_GPR_U32(ctx, 31, 0x3EF258u);
    ctx->pc = 0x3EF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF250u;
    // 0x3ef254: 0x26042b80  addiu       $a0, $s0, 0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EF250u, 0x3EF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF258u;
label_3ef258:
    // 0x3ef258: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3ef258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3ef25c: 0x26042b80  addiu       $a0, $s0, 0x2B80
    ctx->pc = 0x3ef25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x3ef260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ef260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ef264: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EF264u;
    SET_GPR_U32(ctx, 31, 0x3EF26Cu);
    ctx->pc = 0x3EF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF264u;
    // 0x3ef268: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EF264u, 0x3EF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF26Cu;
label_3ef26c:
    // 0x3ef26c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ef26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ef270: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ef274: 0xa6032b2e  sh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3ef274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef278: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3ef278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef27c: 0x0  nop
    ctx->pc = 0x3ef27cu;
    // NOP
label_3ef280:
    // 0x3ef280: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ef280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ef284: 0x26052b70  addiu       $a1, $s0, 0x2B70
    ctx->pc = 0x3ef284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    // 0x3ef288: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EF288u;
    SET_GPR_U32(ctx, 31, 0x3EF290u);
    ctx->pc = 0x3EF28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF288u;
    // 0x3ef28c: 0x26062b80  addiu       $a2, $s0, 0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EF288u, 0x3EF290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF290u;
label_3ef290:
    // 0x3ef290: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ef290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ef294: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x3EF294u;
    SET_GPR_U32(ctx, 31, 0x3EF29Cu);
    ctx->pc = 0x3EF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF294u;
    // 0x3ef298: 0x26052b70  addiu       $a1, $s0, 0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x3EF294u, 0x3EF29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF29Cu;
label_3ef29c:
    // 0x3ef29c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF29Cu;
    {
        const bool branch_taken_0x3ef29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF29Cu;
        // 0x3ef2a0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef29c) {
            ctx->pc = 0x3EF2B0u;
            goto label_3ef2b0;
        }
    }
    ctx->pc = 0x3EF2A4u;
    // 0x3ef2a4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3EF2A4u;
    {
        const bool branch_taken_0x3ef2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2A4u;
        // 0x3ef2a8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2a4) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF2ACu;
    // 0x3ef2ac: 0x0  nop
    ctx->pc = 0x3ef2acu;
    // NOP
label_3ef2b0:
    // 0x3ef2b0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ef2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ef2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ef2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef2b8: 0x7e022b70  sq          $v0, 0x2B70($s0)
    ctx->pc = 0x3ef2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11120), GPR_VEC(ctx, 2));
    // 0x3ef2bc: 0x92042b2c  lbu         $a0, 0x2B2C($s0)
    ctx->pc = 0x3ef2bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3ef2c0: 0xc0bc7a0  jal         func_2F1E80
    ctx->pc = 0x3EF2C0u;
    SET_GPR_U32(ctx, 31, 0x3EF2C8u);
    ctx->pc = 0x3EF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF2C0u;
    // 0x3ef2c4: 0x26062b70  addiu       $a2, $s0, 0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E80u, 0x3EF2C0u, 0x3EF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF2C8u;
label_3ef2c8:
    // 0x3ef2c8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ef2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef2cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3ef2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3ef2d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ef2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ef2d4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ef2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ef2d8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ef2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ef2dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ef2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ef2e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ef2e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ef2e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ef2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ef2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ef2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ef2ec: 0x0  nop
    ctx->pc = 0x3ef2ecu;
    // NOP
    // 0x3ef2f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ef2f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ef2f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef2f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ef2f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF2F8u;
    {
        const bool branch_taken_0x3ef2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef2f8) {
            ctx->pc = 0x3EF310u;
            goto label_3ef310;
        }
    }
    ctx->pc = 0x3EF300u;
    // 0x3ef300: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef304: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ef304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ef308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF308u;
    {
        const bool branch_taken_0x3ef308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF308u;
        // 0x3ef30c: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef308) {
            ctx->pc = 0x3EF32Cu;
            goto label_3ef32c;
        }
    }
    ctx->pc = 0x3EF310u;
label_3ef310:
    // 0x3ef310: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ef310u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ef314: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ef314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ef318: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef31c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ef31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ef320: 0x0  nop
    ctx->pc = 0x3ef320u;
    // NOP
    // 0x3ef324: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ef324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ef328: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3ef32c:
    // 0x3ef32c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ef32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ef330: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3ef330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef334: 0x0  nop
    ctx->pc = 0x3ef334u;
    // NOP
label_3ef338:
    // 0x3ef338: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EF338u;
    SET_GPR_U32(ctx, 31, 0x3EF340u);
    ctx->pc = 0x3EF33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF338u;
    // 0x3ef33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EF338u, 0x3EF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF340u;
label_3ef340:
    // 0x3ef340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF340u;
    {
        const bool branch_taken_0x3ef340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF340u;
        // 0x3ef344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef340) {
            ctx->pc = 0x3EF358u;
            goto label_3ef358;
        }
    }
    ctx->pc = 0x3EF348u;
    // 0x3ef348: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EF348u;
    SET_GPR_U32(ctx, 31, 0x3EF350u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EF348u, 0x3EF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF350u;
label_3ef350:
    // 0x3ef350: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3EF350u;
    {
        const bool branch_taken_0x3ef350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef350) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF358u;
label_3ef358:
    // 0x3ef358: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef35c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF35Cu;
    {
        const bool branch_taken_0x3ef35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef35c) {
            ctx->pc = 0x3EF370u;
            goto label_3ef370;
        }
    }
    ctx->pc = 0x3EF364u;
    // 0x3ef364: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ef364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ef368: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef36c: 0x0  nop
    ctx->pc = 0x3ef36cu;
    // NOP
label_3ef370:
    // 0x3ef370: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef374: 0x1c60003a  bgtz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3EF374u;
    {
        const bool branch_taken_0x3ef374 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ef374) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF37Cu;
    // 0x3ef37c: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3ef37cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3ef380: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ef380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ef384: 0xa6032b2e  sh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3ef384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef388: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3ef388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3ef38c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF38Cu;
    {
        const bool branch_taken_0x3ef38c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF38Cu;
        // 0x3ef390: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef38c) {
            ctx->pc = 0x3EF3A0u;
            goto label_3ef3a0;
        }
    }
    ctx->pc = 0x3EF394u;
    // 0x3ef394: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3EF394u;
    {
        const bool branch_taken_0x3ef394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF394u;
        // 0x3ef398: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef394) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF39Cu;
    // 0x3ef39c: 0x0  nop
    ctx->pc = 0x3ef39cu;
    // NOP
label_3ef3a0:
    // 0x3ef3a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ef3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ef3a4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3EF3A4u;
    {
        const bool branch_taken_0x3ef3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3A4u;
        // 0x3ef3a8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3a4) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF3ACu;
    // 0x3ef3ac: 0x0  nop
    ctx->pc = 0x3ef3acu;
    // NOP
label_3ef3b0:
    // 0x3ef3b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ef3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ef3b4: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3ef3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ef3b8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ef3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ef3bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ef3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef3c0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3ef3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3ef3c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ef3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ef3c8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3ef3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ef3cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ef3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ef3d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ef3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ef3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ef3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ef3d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ef3d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ef3dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ef3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ef3e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef3e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ef3e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF3E4u;
    {
        const bool branch_taken_0x3ef3e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef3e4) {
            ctx->pc = 0x3EF3FCu;
            goto label_3ef3fc;
        }
    }
    ctx->pc = 0x3EF3ECu;
    // 0x3ef3ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef3ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef3f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ef3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ef3f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF3F4u;
    {
        const bool branch_taken_0x3ef3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3F4u;
        // 0x3ef3f8: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3f4) {
            ctx->pc = 0x3EF418u;
            goto label_3ef418;
        }
    }
    ctx->pc = 0x3EF3FCu;
label_3ef3fc:
    // 0x3ef3fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ef3fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ef400: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ef400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ef404: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ef408: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ef408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ef40c: 0x0  nop
    ctx->pc = 0x3ef40cu;
    // NOP
    // 0x3ef410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ef410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ef414: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3ef418:
    // 0x3ef418: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EF418u;
    SET_GPR_U32(ctx, 31, 0x3EF420u);
    ctx->pc = 0x3EF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF418u;
    // 0x3ef41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EF418u, 0x3EF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF420u;
label_3ef420:
    // 0x3ef420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF420u;
    {
        const bool branch_taken_0x3ef420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF420u;
        // 0x3ef424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef420) {
            ctx->pc = 0x3EF438u;
            goto label_3ef438;
        }
    }
    ctx->pc = 0x3EF428u;
    // 0x3ef428: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EF428u;
    SET_GPR_U32(ctx, 31, 0x3EF430u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EF428u, 0x3EF430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF430u;
label_3ef430:
    // 0x3ef430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EF430u;
    {
        const bool branch_taken_0x3ef430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef430) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF438u;
label_3ef438:
    // 0x3ef438: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef43c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF43Cu;
    {
        const bool branch_taken_0x3ef43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef43c) {
            ctx->pc = 0x3EF450u;
            goto label_3ef450;
        }
    }
    ctx->pc = 0x3EF444u;
    // 0x3ef444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ef444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ef448: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef448u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef44c: 0x0  nop
    ctx->pc = 0x3ef44cu;
    // NOP
label_3ef450:
    // 0x3ef450: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef454: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF454u;
    {
        const bool branch_taken_0x3ef454 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF454u;
        // 0x3ef458: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef454) {
            ctx->pc = 0x3EF460u;
            goto label_3ef460;
        }
    }
    ctx->pc = 0x3EF45Cu;
    // 0x3ef45c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ef45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ef460:
    // 0x3ef460: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ef460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ef464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ef464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ef468: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ef468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef46c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF46Cu;
        // 0x3ef470: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF474u;
}

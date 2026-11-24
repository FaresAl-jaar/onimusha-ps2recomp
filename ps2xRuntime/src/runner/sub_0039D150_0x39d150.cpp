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

// Function: sub_0039D150
// Address: 0x39d150 - 0x39d998
void sub_0039D150_0x39d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D150_0x39d150");
#endif

    switch (ctx->pc) {
        case 0x39d1a8u: goto label_39d1a8;
        case 0x39d1b0u: goto label_39d1b0;
        case 0x39d1b8u: goto label_39d1b8;
        case 0x39d214u: goto label_39d214;
        case 0x39d288u: goto label_39d288;
        case 0x39d298u: goto label_39d298;
        case 0x39d2ecu: goto label_39d2ec;
        case 0x39d300u: goto label_39d300;
        case 0x39d390u: goto label_39d390;
        case 0x39d398u: goto label_39d398;
        case 0x39d3a0u: goto label_39d3a0;
        case 0x39d3a8u: goto label_39d3a8;
        case 0x39d3b4u: goto label_39d3b4;
        case 0x39d3e8u: goto label_39d3e8;
        case 0x39d3f0u: goto label_39d3f0;
        case 0x39d480u: goto label_39d480;
        case 0x39d4a4u: goto label_39d4a4;
        case 0x39d4e0u: goto label_39d4e0;
        case 0x39d514u: goto label_39d514;
        case 0x39d51cu: goto label_39d51c;
        case 0x39d548u: goto label_39d548;
        case 0x39d560u: goto label_39d560;
        case 0x39d570u: goto label_39d570;
        case 0x39d580u: goto label_39d580;
        case 0x39d5ecu: goto label_39d5ec;
        case 0x39d628u: goto label_39d628;
        case 0x39d640u: goto label_39d640;
        case 0x39d650u: goto label_39d650;
        case 0x39d668u: goto label_39d668;
        case 0x39d680u: goto label_39d680;
        case 0x39d698u: goto label_39d698;
        case 0x39d6a8u: goto label_39d6a8;
        case 0x39d6c0u: goto label_39d6c0;
        case 0x39d6d8u: goto label_39d6d8;
        case 0x39d6e8u: goto label_39d6e8;
        case 0x39d6f4u: goto label_39d6f4;
        case 0x39d778u: goto label_39d778;
        case 0x39d7b0u: goto label_39d7b0;
        case 0x39d7b8u: goto label_39d7b8;
        case 0x39d840u: goto label_39d840;
        case 0x39d860u: goto label_39d860;
        case 0x39d884u: goto label_39d884;
        case 0x39d8b0u: goto label_39d8b0;
        case 0x39d8c0u: goto label_39d8c0;
        case 0x39d8d8u: goto label_39d8d8;
        case 0x39d8f0u: goto label_39d8f0;
        case 0x39d904u: goto label_39d904;
        case 0x39d960u: goto label_39d960;
        default: break;
    }

    ctx->pc = 0x39d150u;

    // 0x39d150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39d154: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x39d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x39d158: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39d15c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39d160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39d164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39d168: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39d168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39d16c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x39d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39d170: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39d170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39d174: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39d174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39d178: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x39d178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x39d17c: 0x10200200  beqz        $at, . + 4 + (0x200 << 2)
    ctx->pc = 0x39D17Cu;
    {
        const bool branch_taken_0x39d17c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D17Cu;
        // 0x39d180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d17c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D184u;
    // 0x39d184: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x39d184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x39d188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39d188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39d18c: 0x24a52530  addiu       $a1, $a1, 0x2530
    ctx->pc = 0x39d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
    // 0x39d190: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39d194: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39d198: 0x600008  jr          $v1
    ctx->pc = 0x39D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39D1A0u: goto label_39d1a0;
            case 0x39D218u: goto label_39d218;
            case 0x39D2F8u: goto label_39d2f8;
            case 0x39D308u: goto label_39d308;
            case 0x39D388u: goto label_39d388;
            case 0x39D400u: goto label_39d400;
            case 0x39D540u: goto label_39d540;
            case 0x39D558u: goto label_39d558;
            case 0x39D568u: goto label_39d568;
            case 0x39D620u: goto label_39d620;
            case 0x39D640u: goto label_39d640;
            case 0x39D678u: goto label_39d678;
            case 0x39D698u: goto label_39d698;
            case 0x39D6B8u: goto label_39d6b8;
            case 0x39D6E8u: goto label_39d6e8;
            case 0x39D770u: goto label_39d770;
            case 0x39D7C0u: goto label_39d7c0;
            case 0x39D8A8u: goto label_39d8a8;
            case 0x39D8E8u: goto label_39d8e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39D1A0u;
label_39d1a0:
    // 0x39d1a0: 0xc0e71b8  jal         func_39C6E0
    ctx->pc = 0x39D1A0u;
    SET_GPR_U32(ctx, 31, 0x39D1A8u);
    ctx->pc = 0x39C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C6E0u, 0x39D1A0u, 0x39D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D1A8u;
label_39d1a8:
    // 0x39d1a8: 0xc0e70f0  jal         func_39C3C0
    ctx->pc = 0x39D1A8u;
    SET_GPR_U32(ctx, 31, 0x39D1B0u);
    ctx->pc = 0x39D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D1A8u;
    // 0x39d1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3C0u, 0x39D1A8u, 0x39D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D1B0u;
label_39d1b0:
    // 0x39d1b0: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D1B0u;
    SET_GPR_U32(ctx, 31, 0x39D1B8u);
    ctx->pc = 0x39D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D1B0u;
    // 0x39d1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D1B0u, 0x39D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D1B8u;
label_39d1b8:
    // 0x39d1b8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x39d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x39d1bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39d1c0: 0x2463caa0  addiu       $v1, $v1, -0x3560
    ctx->pc = 0x39d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953632));
    // 0x39d1c4: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x39d1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x39d1c8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x39d1c8u;
    { uint32_t bits = FAST_READ32(0x65CAA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d1cc: 0x24070055  addiu       $a3, $zero, 0x55
    ctx->pc = 0x39d1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x39d1d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x39d1d0u;
    { uint32_t bits = FAST_READ32(0x65CAA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39d1d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x39d1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d1d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x39d1d8u;
    { uint32_t bits = FAST_READ32(0x65CAA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39d1dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39d1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d1e4: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x39d1e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x39d1e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39d1ec: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x39d1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x39d1f0: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x39d1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x39d1f4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d1f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39d1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d1fc: 0xa60707f2  sh          $a3, 0x7F2($s0)
    ctx->pc = 0x39d1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x39d200: 0xa20607f5  sb          $a2, 0x7F5($s0)
    ctx->pc = 0x39d200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x39d204: 0xae0507ec  sw          $a1, 0x7EC($s0)
    ctx->pc = 0x39d204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 5));
    // 0x39d208: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39d20c: 0xc0e6f60  jal         func_39BD80
    ctx->pc = 0x39D20Cu;
    SET_GPR_U32(ctx, 31, 0x39D214u);
    ctx->pc = 0x39D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D20Cu;
    // 0x39d210: 0xa6022bca  sh          $v0, 0x2BCA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11210), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD80u, 0x39D20Cu, 0x39D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D214u;
label_39d214:
    // 0x39d214: 0x0  nop
    ctx->pc = 0x39d214u;
    // NOP
label_39d218:
    // 0x39d218: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x39d218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x39d21c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d220: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39d220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39d224: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39d224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39d228: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x39d228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39d22c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39d230: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39d230u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39d234: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39d234u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39d238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39d238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39d23c: 0x0  nop
    ctx->pc = 0x39d23cu;
    // NOP
    // 0x39d240: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39d240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39d244: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39d244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39d248: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39D248u;
    {
        const bool branch_taken_0x39d248 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D248u;
        // 0x39d24c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d248) {
            ctx->pc = 0x39D260u;
            goto label_39d260;
        }
    }
    ctx->pc = 0x39D250u;
    // 0x39d250: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d254: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39D258u;
    {
        const bool branch_taken_0x39d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d258) {
            ctx->pc = 0x39D278u;
            goto label_39d278;
        }
    }
    ctx->pc = 0x39D260u;
label_39d260:
    // 0x39d260: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39d260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39d264: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39d264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39d268: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d26c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d26cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d270: 0x0  nop
    ctx->pc = 0x39d270u;
    // NOP
    // 0x39d274: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39d274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_39d278:
    // 0x39d278: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39D278u;
    {
        const bool branch_taken_0x39d278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39d278) {
            ctx->pc = 0x39D298u;
            goto label_39d298;
        }
    }
    ctx->pc = 0x39D280u;
    // 0x39d280: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39D280u;
    SET_GPR_U32(ctx, 31, 0x39D288u);
    ctx->pc = 0x39D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D280u;
    // 0x39d284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39D280u, 0x39D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D288u;
label_39d288:
    // 0x39d288: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39d288u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39d28c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d290: 0xc0aa328  jal         func_2A8CA0
    ctx->pc = 0x39D290u;
    SET_GPR_U32(ctx, 31, 0x39D298u);
    ctx->pc = 0x39D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D290u;
    // 0x39d294: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8CA0u, 0x39D290u, 0x39D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D298u;
label_39d298:
    // 0x39d298: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39d298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39d29c: 0x106001b8  beqz        $v1, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x39D29Cu;
    {
        const bool branch_taken_0x39d29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d29c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D2A4u;
    // 0x39d2a4: 0x8e090148  lw          $t1, 0x148($s0)
    ctx->pc = 0x39d2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x39d2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39d2ac: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x39d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x39d2b0: 0x24080057  addiu       $t0, $zero, 0x57
    ctx->pc = 0x39d2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x39d2b4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x39d2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d2b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39d2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d2c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39d2c4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x39d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39d2c8: 0x35294000  ori         $t1, $t1, 0x4000
    ctx->pc = 0x39d2c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x39d2cc: 0xae090148  sw          $t1, 0x148($s0)
    ctx->pc = 0x39d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 9));
    // 0x39d2d0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39d2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d2d4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39d2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d2d8: 0xa60807f2  sh          $t0, 0x7F2($s0)
    ctx->pc = 0x39d2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 8));
    // 0x39d2dc: 0xa20707f5  sb          $a3, 0x7F5($s0)
    ctx->pc = 0x39d2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 7));
    // 0x39d2e0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x39d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x39d2e4: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x39D2E4u;
    SET_GPR_U32(ctx, 31, 0x39D2ECu);
    ctx->pc = 0x39D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D2E4u;
    // 0x39d2e8: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x39D2E4u, 0x39D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D2ECu;
label_39d2ec:
    // 0x39d2ec: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x39D2ECu;
    {
        const bool branch_taken_0x39d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d2ec) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D2F4u;
    // 0x39d2f4: 0x0  nop
    ctx->pc = 0x39d2f4u;
    // NOP
label_39d2f8:
    // 0x39d2f8: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D2F8u;
    SET_GPR_U32(ctx, 31, 0x39D300u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D2F8u, 0x39D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D300u;
label_39d300:
    // 0x39d300: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39d304: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39d308:
    // 0x39d308: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39d308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39d30c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x39d30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39d310: 0x86052bc2  lh          $a1, 0x2BC2($s0)
    ctx->pc = 0x39d310u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
    // 0x39d314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39d314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39d318: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x39d318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x39d31c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x39d31cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39d320: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39d320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39d324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39d324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39d328: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x39d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39d32c: 0xa6032bc2  sh          $v1, 0x2BC2($s0)
    ctx->pc = 0x39d32cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d330: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d334: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39d334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39d338: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39d338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39d33c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39d33cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39d340: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39D340u;
    {
        const bool branch_taken_0x39d340 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D340u;
        // 0x39d344: 0x86052bc2  lh          $a1, 0x2BC2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d340) {
            ctx->pc = 0x39D358u;
            goto label_39d358;
        }
    }
    ctx->pc = 0x39D348u;
    // 0x39d348: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d34c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39D350u;
    {
        const bool branch_taken_0x39d350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D350u;
        // 0x39d354: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d350) {
            ctx->pc = 0x39D374u;
            goto label_39d374;
        }
    }
    ctx->pc = 0x39D358u;
label_39d358:
    // 0x39d358: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39d358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39d35c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39d360: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d364: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d368: 0x0  nop
    ctx->pc = 0x39d368u;
    // NOP
    // 0x39d36c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39d36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39d370: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x39d370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39d374:
    // 0x39d374: 0x14600182  bnez        $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x39D374u;
    {
        const bool branch_taken_0x39d374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D374u;
        // 0x39d378: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d374) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D37Cu;
    // 0x39d37c: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x39D37Cu;
    {
        const bool branch_taken_0x39d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D37Cu;
        // 0x39d380: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d37c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D384u;
    // 0x39d384: 0x0  nop
    ctx->pc = 0x39d384u;
    // NOP
label_39d388:
    // 0x39d388: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D388u;
    SET_GPR_U32(ctx, 31, 0x39D390u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D388u, 0x39D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D390u;
label_39d390:
    // 0x39d390: 0xc0e7044  jal         func_39C110
    ctx->pc = 0x39D390u;
    SET_GPR_U32(ctx, 31, 0x39D398u);
    ctx->pc = 0x39D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D390u;
    // 0x39d394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C110u, 0x39D390u, 0x39D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D398u;
label_39d398:
    // 0x39d398: 0xc0e71b8  jal         func_39C6E0
    ctx->pc = 0x39D398u;
    SET_GPR_U32(ctx, 31, 0x39D3A0u);
    ctx->pc = 0x39D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D398u;
    // 0x39d39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C6E0u, 0x39D398u, 0x39D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3A0u;
label_39d3a0:
    // 0x39d3a0: 0xc0e70f0  jal         func_39C3C0
    ctx->pc = 0x39D3A0u;
    SET_GPR_U32(ctx, 31, 0x39D3A8u);
    ctx->pc = 0x39D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D3A0u;
    // 0x39d3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3C0u, 0x39D3A0u, 0x39D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3A8u;
label_39d3a8:
    // 0x39d3a8: 0x86052bc6  lh          $a1, 0x2BC6($s0)
    ctx->pc = 0x39d3a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11206)));
    // 0x39d3ac: 0xc0e7090  jal         func_39C240
    ctx->pc = 0x39D3ACu;
    SET_GPR_U32(ctx, 31, 0x39D3B4u);
    ctx->pc = 0x39D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D3ACu;
    // 0x39d3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C240u, 0x39D3ACu, 0x39D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3B4u;
label_39d3b4:
    // 0x39d3b4: 0xa6022bd2  sh          $v0, 0x2BD2($s0)
    ctx->pc = 0x39d3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11218), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d3b8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x39d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x39d3bc: 0x86032bd2  lh          $v1, 0x2BD2($s0)
    ctx->pc = 0x39d3bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11218)));
    // 0x39d3c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x39d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x39d3c4: 0x2442ca20  addiu       $v0, $v0, -0x35E0
    ctx->pc = 0x39d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
    // 0x39d3c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39d3cc: 0x24a52440  addiu       $a1, $a1, 0x2440
    ctx->pc = 0x39d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9280));
    // 0x39d3d0: 0x26062bb0  addiu       $a2, $s0, 0x2BB0
    ctx->pc = 0x39d3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39d3d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39d3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d3dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x39d3dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d3e0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39D3E0u;
    SET_GPR_U32(ctx, 31, 0x39D3E8u);
    ctx->pc = 0x39D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D3E0u;
    // 0x39d3e4: 0x7e022bb0  sq          $v0, 0x2BB0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39D3E0u, 0x39D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3E8u;
label_39d3e8:
    // 0x39d3e8: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39D3E8u;
    SET_GPR_U32(ctx, 31, 0x39D3F0u);
    ctx->pc = 0x39D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D3E8u;
    // 0x39d3ec: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39D3E8u, 0x39D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3F0u;
label_39d3f0:
    // 0x39d3f0: 0xa6022bc0  sh          $v0, 0x2BC0($s0)
    ctx->pc = 0x39d3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11200), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d3f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39d3f8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39d3fc: 0x0  nop
    ctx->pc = 0x39d3fcu;
    // NOP
label_39d400:
    // 0x39d400: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39d404: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x39d404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39d408: 0x86052bc2  lh          $a1, 0x2BC2($s0)
    ctx->pc = 0x39d408u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
    // 0x39d40c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39d40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39d410: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x39d410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x39d414: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x39d414u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39d418: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39d418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39d41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39d41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39d420: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x39d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39d424: 0xa6032bc2  sh          $v1, 0x2BC2($s0)
    ctx->pc = 0x39d424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d428: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39d428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d42c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39d42cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39d430: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39d430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39d434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39d434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39d438: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39D438u;
    {
        const bool branch_taken_0x39d438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D438u;
        // 0x39d43c: 0x86052bc2  lh          $a1, 0x2BC2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d438) {
            ctx->pc = 0x39D450u;
            goto label_39d450;
        }
    }
    ctx->pc = 0x39D440u;
    // 0x39d440: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d444: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39D448u;
    {
        const bool branch_taken_0x39d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D448u;
        // 0x39d44c: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d448) {
            ctx->pc = 0x39D46Cu;
            goto label_39d46c;
        }
    }
    ctx->pc = 0x39D450u;
label_39d450:
    // 0x39d450: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39d450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39d454: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39d454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39d458: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d45c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d45cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d460: 0x0  nop
    ctx->pc = 0x39d460u;
    // NOP
    // 0x39d464: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39d464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39d468: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x39d468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39d46c:
    // 0x39d46c: 0x14600144  bnez        $v1, . + 4 + (0x144 << 2)
    ctx->pc = 0x39D46Cu;
    {
        const bool branch_taken_0x39d46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d46c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D474u;
    // 0x39d474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d478: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39D478u;
    SET_GPR_U32(ctx, 31, 0x39D480u);
    ctx->pc = 0x39D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D478u;
    // 0x39d47c: 0xa6002bc2  sh          $zero, 0x2BC2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39D478u, 0x39D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D480u;
label_39d480:
    // 0x39d480: 0x86052bd2  lh          $a1, 0x2BD2($s0)
    ctx->pc = 0x39d480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11218)));
    // 0x39d484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d488: 0x860a2bc4  lh          $t2, 0x2BC4($s0)
    ctx->pc = 0x39d488u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x39d48c: 0x26062bb0  addiu       $a2, $s0, 0x2BB0
    ctx->pc = 0x39d48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39d490: 0x86072bc0  lh          $a3, 0x2BC0($s0)
    ctx->pc = 0x39d490u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11200)));
    // 0x39d494: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x39d494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39d498: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x39d498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39d49c: 0xc0e7148  jal         func_39C520
    ctx->pc = 0x39D49Cu;
    SET_GPR_U32(ctx, 31, 0x39D4A4u);
    ctx->pc = 0x39D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D49Cu;
    // 0x39d4a0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C520u, 0x39D49Cu, 0x39D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D4A4u;
label_39d4a4:
    // 0x39d4a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x39D4A4u;
    {
        const bool branch_taken_0x39d4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d4a4) {
            ctx->pc = 0x39D530u;
            goto label_39d530;
        }
    }
    ctx->pc = 0x39D4ACu;
    // 0x39d4ac: 0x86032bc6  lh          $v1, 0x2BC6($s0)
    ctx->pc = 0x39d4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11206)));
    // 0x39d4b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39d4b4: 0xa6032bc6  sh          $v1, 0x2BC6($s0)
    ctx->pc = 0x39d4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11206), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d4b8: 0x86052bc6  lh          $a1, 0x2BC6($s0)
    ctx->pc = 0x39d4b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11206)));
    // 0x39d4bc: 0x86032bd4  lh          $v1, 0x2BD4($s0)
    ctx->pc = 0x39d4bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11220)));
    // 0x39d4c0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x39d4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39d4c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D4C4u;
    {
        const bool branch_taken_0x39d4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4C4u;
        // 0x39d4c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4c4) {
            ctx->pc = 0x39D4D8u;
            goto label_39d4d8;
        }
    }
    ctx->pc = 0x39D4CCu;
    // 0x39d4cc: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x39D4CCu;
    {
        const bool branch_taken_0x39d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4CCu;
        // 0x39d4d0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4cc) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D4D4u;
    // 0x39d4d4: 0x0  nop
    ctx->pc = 0x39d4d4u;
    // NOP
label_39d4d8:
    // 0x39d4d8: 0xc0e7090  jal         func_39C240
    ctx->pc = 0x39D4D8u;
    SET_GPR_U32(ctx, 31, 0x39D4E0u);
    ctx->pc = 0x39D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D4D8u;
    // 0x39d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C240u, 0x39D4D8u, 0x39D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D4E0u;
label_39d4e0:
    // 0x39d4e0: 0xa6022bd2  sh          $v0, 0x2BD2($s0)
    ctx->pc = 0x39d4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11218), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d4e4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x39d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x39d4e8: 0x86032bd2  lh          $v1, 0x2BD2($s0)
    ctx->pc = 0x39d4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11218)));
    // 0x39d4ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x39d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x39d4f0: 0x2442ca20  addiu       $v0, $v0, -0x35E0
    ctx->pc = 0x39d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
    // 0x39d4f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39d4f8: 0x24a52440  addiu       $a1, $a1, 0x2440
    ctx->pc = 0x39d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9280));
    // 0x39d4fc: 0x26062bb0  addiu       $a2, $s0, 0x2BB0
    ctx->pc = 0x39d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39d500: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39d500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39d504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d508: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x39d508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d50c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39D50Cu;
    SET_GPR_U32(ctx, 31, 0x39D514u);
    ctx->pc = 0x39D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D50Cu;
    // 0x39d510: 0x7e022bb0  sq          $v0, 0x2BB0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39D50Cu, 0x39D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D514u;
label_39d514:
    // 0x39d514: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39D514u;
    SET_GPR_U32(ctx, 31, 0x39D51Cu);
    ctx->pc = 0x39D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D514u;
    // 0x39d518: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39D514u, 0x39D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D51Cu;
label_39d51c:
    // 0x39d51c: 0xa6022bc0  sh          $v0, 0x2BC0($s0)
    ctx->pc = 0x39d51cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11200), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d520: 0xa6002bc4  sh          $zero, 0x2BC4($s0)
    ctx->pc = 0x39d520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11204), (uint16_t)GPR_U32(ctx, 0));
    // 0x39d524: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x39D524u;
    {
        const bool branch_taken_0x39d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D524u;
        // 0x39d528: 0xa6002bc2  sh          $zero, 0x2BC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d524) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D52Cu;
    // 0x39d52c: 0x0  nop
    ctx->pc = 0x39d52cu;
    // NOP
label_39d530:
    // 0x39d530: 0x86032bc4  lh          $v1, 0x2BC4($s0)
    ctx->pc = 0x39d530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x39d534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39d534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39d538: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x39D538u;
    {
        const bool branch_taken_0x39d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D538u;
        // 0x39d53c: 0xa6032bc4  sh          $v1, 0x2BC4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11204), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d538) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D540u;
label_39d540:
    // 0x39d540: 0xc0e6fd8  jal         func_39BF60
    ctx->pc = 0x39D540u;
    SET_GPR_U32(ctx, 31, 0x39D548u);
    ctx->pc = 0x39BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BF60u, 0x39D540u, 0x39D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D548u;
label_39d548:
    // 0x39d548: 0xa6022bc8  sh          $v0, 0x2BC8($s0)
    ctx->pc = 0x39d548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11208), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d54c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x39d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39d550: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39d550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39d554: 0x0  nop
    ctx->pc = 0x39d554u;
    // NOP
label_39d558:
    // 0x39d558: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D558u;
    SET_GPR_U32(ctx, 31, 0x39D560u);
    ctx->pc = 0x39D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D558u;
    // 0x39d55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D558u, 0x39D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D560u;
label_39d560:
    // 0x39d560: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d564: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39d564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_39d568:
    // 0x39d568: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d56c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d570:
    // 0x39d570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39d574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d578: 0xc0e7220  jal         func_39C880
    ctx->pc = 0x39D578u;
    SET_GPR_U32(ctx, 31, 0x39D580u);
    ctx->pc = 0x39D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D578u;
    // 0x39d57c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C880u, 0x39D578u, 0x39D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D580u;
label_39d580:
    // 0x39d580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D580u;
    {
        const bool branch_taken_0x39d580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d580) {
            ctx->pc = 0x39D590u;
            goto label_39d590;
        }
    }
    ctx->pc = 0x39D588u;
    // 0x39d588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39d58c: 0x0  nop
    ctx->pc = 0x39d58cu;
    // NOP
label_39d590:
    // 0x39d590: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39d590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x39d594: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x39d594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x39d598: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x39D598u;
    {
        const bool branch_taken_0x39d598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d598) {
            ctx->pc = 0x39D570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d570;
        }
    }
    ctx->pc = 0x39D5A0u;
    // 0x39d5a0: 0x86032bd4  lh          $v1, 0x2BD4($s0)
    ctx->pc = 0x39d5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11220)));
    // 0x39d5a4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x39d5a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39d5a8: 0x146000f5  bnez        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x39D5A8u;
    {
        const bool branch_taken_0x39d5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d5a8) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D5B0u;
    // 0x39d5b0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x39d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39d5b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x39d5b8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x39d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x39d5bc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x39d5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39d5c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39d5c4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x39d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x39d5c8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x39d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39d5cc: 0x86032bd4  lh          $v1, 0x2BD4($s0)
    ctx->pc = 0x39d5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11220)));
    // 0x39d5d0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x39d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x39d5d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x39d5d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x39d5d8: 0x0  nop
    ctx->pc = 0x39d5d8u;
    // NOP
    // 0x39d5dc: 0x0  nop
    ctx->pc = 0x39d5dcu;
    // NOP
    // 0x39d5e0: 0x2810  mfhi        $a1
    ctx->pc = 0x39d5e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x39d5e4: 0xc0e7090  jal         func_39C240
    ctx->pc = 0x39D5E4u;
    SET_GPR_U32(ctx, 31, 0x39D5ECu);
    ctx->pc = 0x39D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D5E4u;
    // 0x39d5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C240u, 0x39D5E4u, 0x39D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D5ECu;
label_39d5ec:
    // 0x39d5ec: 0xa6022bcc  sh          $v0, 0x2BCC($s0)
    ctx->pc = 0x39d5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11212), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d5f0: 0x86032bc8  lh          $v1, 0x2BC8($s0)
    ctx->pc = 0x39d5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11208)));
    // 0x39d5f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D5F4u;
    {
        const bool branch_taken_0x39d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5F4u;
        // 0x39d5f8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5f4) {
            ctx->pc = 0x39D610u;
            goto label_39d610;
        }
    }
    ctx->pc = 0x39D5FCu;
    // 0x39d5fc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39d600: 0x86032bc8  lh          $v1, 0x2BC8($s0)
    ctx->pc = 0x39d600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11208)));
    // 0x39d604: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39d604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39d608: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x39D608u;
    {
        const bool branch_taken_0x39d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D608u;
        // 0x39d60c: 0xa6032bc8  sh          $v1, 0x2BC8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11208), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d608) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D610u;
label_39d610:
    // 0x39d610: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x39d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x39d614: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x39D614u;
    {
        const bool branch_taken_0x39d614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D614u;
        // 0x39d618: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d614) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D61Cu;
    // 0x39d61c: 0x0  nop
    ctx->pc = 0x39d61cu;
    // NOP
label_39d620:
    // 0x39d620: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D620u;
    SET_GPR_U32(ctx, 31, 0x39D628u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D620u, 0x39D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D628u;
label_39d628:
    // 0x39d628: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x39d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39d62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d630: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39d630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39d634: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d638: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D638u;
    SET_GPR_U32(ctx, 31, 0x39D640u);
    ctx->pc = 0x39D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D638u;
    // 0x39d63c: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D638u, 0x39D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D640u;
label_39d640:
    // 0x39d640: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d640u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d648: 0xc0e7220  jal         func_39C880
    ctx->pc = 0x39D648u;
    SET_GPR_U32(ctx, 31, 0x39D650u);
    ctx->pc = 0x39D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D648u;
    // 0x39d64c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C880u, 0x39D648u, 0x39D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D650u;
label_39d650:
    // 0x39d650: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x39D650u;
    {
        const bool branch_taken_0x39d650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d650) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D658u;
    // 0x39d658: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d660: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D660u;
    SET_GPR_U32(ctx, 31, 0x39D668u);
    ctx->pc = 0x39D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D660u;
    // 0x39d664: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D660u, 0x39D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D668u;
label_39d668:
    // 0x39d668: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x39d668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39d66c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x39D66Cu;
    {
        const bool branch_taken_0x39d66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D66Cu;
        // 0x39d670: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d66c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D674u;
    // 0x39d674: 0x0  nop
    ctx->pc = 0x39d674u;
    // NOP
label_39d678:
    // 0x39d678: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D678u;
    SET_GPR_U32(ctx, 31, 0x39D680u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D678u, 0x39D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D680u;
label_39d680:
    // 0x39d680: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x39d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x39d684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d688: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39d688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39d68c: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d68cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d690: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D690u;
    SET_GPR_U32(ctx, 31, 0x39D698u);
    ctx->pc = 0x39D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D690u;
    // 0x39d694: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D690u, 0x39D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D698u;
label_39d698:
    // 0x39d698: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d6a0: 0xc0e7220  jal         func_39C880
    ctx->pc = 0x39D6A0u;
    SET_GPR_U32(ctx, 31, 0x39D6A8u);
    ctx->pc = 0x39D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6A0u;
    // 0x39d6a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C880u, 0x39D6A0u, 0x39D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6A8u;
label_39d6a8:
    // 0x39d6a8: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x39D6A8u;
    {
        const bool branch_taken_0x39d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6A8u;
        // 0x39d6ac: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6a8) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D6B0u;
    // 0x39d6b0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x39D6B0u;
    {
        const bool branch_taken_0x39d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6B0u;
        // 0x39d6b4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6b0) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D6B8u;
label_39d6b8:
    // 0x39d6b8: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D6B8u;
    SET_GPR_U32(ctx, 31, 0x39D6C0u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D6B8u, 0x39D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6C0u;
label_39d6c0:
    // 0x39d6c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x39d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x39d6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d6c8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39d6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39d6cc: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d6ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d6d0: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D6D0u;
    SET_GPR_U32(ctx, 31, 0x39D6D8u);
    ctx->pc = 0x39D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6D0u;
    // 0x39d6d4: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D6D0u, 0x39D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6D8u;
label_39d6d8:
    // 0x39d6d8: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d6d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d6e0: 0xc0e70b8  jal         func_39C2E0
    ctx->pc = 0x39D6E0u;
    SET_GPR_U32(ctx, 31, 0x39D6E8u);
    ctx->pc = 0x39D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6E0u;
    // 0x39d6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C2E0u, 0x39D6E0u, 0x39D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6E8u;
label_39d6e8:
    // 0x39d6e8: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d6e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d6ec: 0xc0e7248  jal         func_39C920
    ctx->pc = 0x39D6ECu;
    SET_GPR_U32(ctx, 31, 0x39D6F4u);
    ctx->pc = 0x39D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6ECu;
    // 0x39d6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C920u, 0x39D6ECu, 0x39D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6F4u;
label_39d6f4:
    // 0x39d6f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39d6f8: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x39D6F8u;
    {
        const bool branch_taken_0x39d6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6F8u;
        // 0x39d6fc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6f8) {
            ctx->pc = 0x39D760u;
            goto label_39d760;
        }
    }
    ctx->pc = 0x39D700u;
    // 0x39d700: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x39D700u;
    {
        const bool branch_taken_0x39d700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d700) {
            ctx->pc = 0x39D750u;
            goto label_39d750;
        }
    }
    ctx->pc = 0x39D708u;
    // 0x39d708: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39d708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39d70c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x39D70Cu;
    {
        const bool branch_taken_0x39d70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D70Cu;
        // 0x39d710: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d70c) {
            ctx->pc = 0x39D740u;
            goto label_39d740;
        }
    }
    ctx->pc = 0x39D714u;
    // 0x39d714: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D714u;
    {
        const bool branch_taken_0x39d714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d714) {
            ctx->pc = 0x39D730u;
            goto label_39d730;
        }
    }
    ctx->pc = 0x39D71Cu;
    // 0x39d71c: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x39D71Cu;
    {
        const bool branch_taken_0x39d71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d71c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D724u;
    // 0x39d724: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x39D724u;
    {
        const bool branch_taken_0x39d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d724) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D72Cu;
    // 0x39d72c: 0x0  nop
    ctx->pc = 0x39d72cu;
    // NOP
label_39d730:
    // 0x39d730: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x39d730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x39d734: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x39D734u;
    {
        const bool branch_taken_0x39d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D734u;
        // 0x39d738: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d734) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D73Cu;
    // 0x39d73c: 0x0  nop
    ctx->pc = 0x39d73cu;
    // NOP
label_39d740:
    // 0x39d740: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x39d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x39d744: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x39D744u;
    {
        const bool branch_taken_0x39d744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D744u;
        // 0x39d748: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d744) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D74Cu;
    // 0x39d74c: 0x0  nop
    ctx->pc = 0x39d74cu;
    // NOP
label_39d750:
    // 0x39d750: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x39d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39d754: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x39D754u;
    {
        const bool branch_taken_0x39d754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D754u;
        // 0x39d758: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d754) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D75Cu;
    // 0x39d75c: 0x0  nop
    ctx->pc = 0x39d75cu;
    // NOP
label_39d760:
    // 0x39d760: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x39d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x39d764: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x39D764u;
    {
        const bool branch_taken_0x39d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D764u;
        // 0x39d768: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d764) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D76Cu;
    // 0x39d76c: 0x0  nop
    ctx->pc = 0x39d76cu;
    // NOP
label_39d770:
    // 0x39d770: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D770u;
    SET_GPR_U32(ctx, 31, 0x39D778u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D770u, 0x39D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D778u;
label_39d778:
    // 0x39d778: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39d77c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x39d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x39d780: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39d784: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x39d784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x39d788: 0x86032bcc  lh          $v1, 0x2BCC($s0)
    ctx->pc = 0x39d788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d78c: 0x2442ca20  addiu       $v0, $v0, -0x35E0
    ctx->pc = 0x39d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
    // 0x39d790: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39d790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39d794: 0x24a52440  addiu       $a1, $a1, 0x2440
    ctx->pc = 0x39d794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9280));
    // 0x39d798: 0x26062bb0  addiu       $a2, $s0, 0x2BB0
    ctx->pc = 0x39d798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39d79c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x39d7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d7a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x39d7a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d7a8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39D7A8u;
    SET_GPR_U32(ctx, 31, 0x39D7B0u);
    ctx->pc = 0x39D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D7A8u;
    // 0x39d7ac: 0x7e022bb0  sq          $v0, 0x2BB0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39D7A8u, 0x39D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D7B0u;
label_39d7b0:
    // 0x39d7b0: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39D7B0u;
    SET_GPR_U32(ctx, 31, 0x39D7B8u);
    ctx->pc = 0x39D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D7B0u;
    // 0x39d7b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39D7B0u, 0x39D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D7B8u;
label_39d7b8:
    // 0x39d7b8: 0xa6022bc0  sh          $v0, 0x2BC0($s0)
    ctx->pc = 0x39d7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11200), (uint16_t)GPR_U32(ctx, 2));
    // 0x39d7bc: 0x0  nop
    ctx->pc = 0x39d7bcu;
    // NOP
label_39d7c0:
    // 0x39d7c0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39d7c4: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x39d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39d7c8: 0x86052bc2  lh          $a1, 0x2BC2($s0)
    ctx->pc = 0x39d7c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
    // 0x39d7cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39d7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39d7d0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x39d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x39d7d4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x39d7d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39d7d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39d7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39d7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39d7e0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x39d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39d7e4: 0xa6032bc2  sh          $v1, 0x2BC2($s0)
    ctx->pc = 0x39d7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d7e8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d7ec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39d7ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39d7f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39d7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39d7f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39d7f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39d7f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39D7F8u;
    {
        const bool branch_taken_0x39d7f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7F8u;
        // 0x39d7fc: 0x86052bc2  lh          $a1, 0x2BC2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7f8) {
            ctx->pc = 0x39D810u;
            goto label_39d810;
        }
    }
    ctx->pc = 0x39D800u;
    // 0x39d800: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d804: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39D808u;
    {
        const bool branch_taken_0x39d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D808u;
        // 0x39d80c: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d808) {
            ctx->pc = 0x39D82Cu;
            goto label_39d82c;
        }
    }
    ctx->pc = 0x39D810u;
label_39d810:
    // 0x39d810: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39d810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39d814: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39d814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39d818: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39d818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39d81c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39d81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39d820: 0x0  nop
    ctx->pc = 0x39d820u;
    // NOP
    // 0x39d824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39d824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39d828: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x39d828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39d82c:
    // 0x39d82c: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x39D82Cu;
    {
        const bool branch_taken_0x39d82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d82c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D834u;
    // 0x39d834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d838: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39D838u;
    SET_GPR_U32(ctx, 31, 0x39D840u);
    ctx->pc = 0x39D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D838u;
    // 0x39d83c: 0xa6002bc2  sh          $zero, 0x2BC2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39D838u, 0x39D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D840u;
label_39d840:
    // 0x39d840: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x39d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x39d844: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39d844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39d848: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D848u;
    {
        const bool branch_taken_0x39d848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D848u;
        // 0x39d84c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d848) {
            ctx->pc = 0x39D858u;
            goto label_39d858;
        }
    }
    ctx->pc = 0x39D850u;
    // 0x39d850: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x39D850u;
    {
        const bool branch_taken_0x39d850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D850u;
        // 0x39d854: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d850) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D858u;
label_39d858:
    // 0x39d858: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39D858u;
    SET_GPR_U32(ctx, 31, 0x39D860u);
    ctx->pc = 0x39D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D858u;
    // 0x39d85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39D858u, 0x39D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D860u;
label_39d860:
    // 0x39d860: 0x86052bcc  lh          $a1, 0x2BCC($s0)
    ctx->pc = 0x39d860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d868: 0x860a2bc4  lh          $t2, 0x2BC4($s0)
    ctx->pc = 0x39d868u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x39d86c: 0x26062bb0  addiu       $a2, $s0, 0x2BB0
    ctx->pc = 0x39d86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39d870: 0x86072bc0  lh          $a3, 0x2BC0($s0)
    ctx->pc = 0x39d870u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11200)));
    // 0x39d874: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x39d874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39d878: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x39d878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39d87c: 0xc0e7148  jal         func_39C520
    ctx->pc = 0x39D87Cu;
    SET_GPR_U32(ctx, 31, 0x39D884u);
    ctx->pc = 0x39D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D87Cu;
    // 0x39d880: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C520u, 0x39D87Cu, 0x39D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D884u;
label_39d884:
    // 0x39d884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D884u;
    {
        const bool branch_taken_0x39d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D884u;
        // 0x39d888: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d884) {
            ctx->pc = 0x39D898u;
            goto label_39d898;
        }
    }
    ctx->pc = 0x39D88Cu;
    // 0x39d88c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x39D88Cu;
    {
        const bool branch_taken_0x39d88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D88Cu;
        // 0x39d890: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d88c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D894u;
    // 0x39d894: 0x0  nop
    ctx->pc = 0x39d894u;
    // NOP
label_39d898:
    // 0x39d898: 0x86032bc4  lh          $v1, 0x2BC4($s0)
    ctx->pc = 0x39d898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x39d89c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39d8a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x39D8A0u;
    {
        const bool branch_taken_0x39d8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8A0u;
        // 0x39d8a4: 0xa6032bc4  sh          $v1, 0x2BC4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11204), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8a0) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D8A8u;
label_39d8a8:
    // 0x39d8a8: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D8A8u;
    SET_GPR_U32(ctx, 31, 0x39D8B0u);
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D8A8u, 0x39D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8B0u;
label_39d8b0:
    // 0x39d8b0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x39d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x39d8b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d8b8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39d8bc: 0x0  nop
    ctx->pc = 0x39d8bcu;
    // NOP
label_39d8c0:
    // 0x39d8c0: 0x86032bcc  lh          $v1, 0x2BCC($s0)
    ctx->pc = 0x39d8c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d8c4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D8C4u;
    {
        const bool branch_taken_0x39d8c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x39D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8C4u;
        // 0x39d8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8c4) {
            ctx->pc = 0x39D8D8u;
            goto label_39d8d8;
        }
    }
    ctx->pc = 0x39D8CCu;
    // 0x39d8cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39d8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d8d0: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D8D0u;
    SET_GPR_U32(ctx, 31, 0x39D8D8u);
    ctx->pc = 0x39D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8D0u;
    // 0x39d8d4: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D8D0u, 0x39D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8D8u;
label_39d8d8:
    // 0x39d8d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39d8dc: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x39d8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x39d8e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x39D8E0u;
    {
        const bool branch_taken_0x39d8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d8e0) {
            ctx->pc = 0x39D8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d8c0;
        }
    }
    ctx->pc = 0x39D8E8u;
label_39d8e8:
    // 0x39d8e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d8ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d8f0:
    // 0x39d8f0: 0x86032bcc  lh          $v1, 0x2BCC($s0)
    ctx->pc = 0x39d8f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11212)));
    // 0x39d8f4: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D8F4u;
    {
        const bool branch_taken_0x39d8f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x39D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8F4u;
        // 0x39d8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8f4) {
            ctx->pc = 0x39D910u;
            goto label_39d910;
        }
    }
    ctx->pc = 0x39D8FCu;
    // 0x39d8fc: 0xc0e7248  jal         func_39C920
    ctx->pc = 0x39D8FCu;
    SET_GPR_U32(ctx, 31, 0x39D904u);
    ctx->pc = 0x39D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8FCu;
    // 0x39d900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C920u, 0x39D8FCu, 0x39D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D904u;
label_39d904:
    // 0x39d904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39D904u;
    {
        const bool branch_taken_0x39d904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d904) {
            ctx->pc = 0x39D910u;
            goto label_39d910;
        }
    }
    ctx->pc = 0x39D90Cu;
    // 0x39d90c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39d90cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39d910:
    // 0x39d910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39d914: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x39d914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x39d918: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x39D918u;
    {
        const bool branch_taken_0x39d918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d918) {
            ctx->pc = 0x39D8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d8f0;
        }
    }
    ctx->pc = 0x39D920u;
    // 0x39d920: 0x86032bd4  lh          $v1, 0x2BD4($s0)
    ctx->pc = 0x39d920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11220)));
    // 0x39d924: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39d924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39d928: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x39d928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39d92c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39D92Cu;
    {
        const bool branch_taken_0x39d92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d92c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D934u;
    // 0x39d934: 0x86032bca  lh          $v1, 0x2BCA($s0)
    ctx->pc = 0x39d934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11210)));
    // 0x39d938: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39d93c: 0xa6032bca  sh          $v1, 0x2BCA($s0)
    ctx->pc = 0x39d93cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11210), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d940: 0x86032bca  lh          $v1, 0x2BCA($s0)
    ctx->pc = 0x39d940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11210)));
    // 0x39d944: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D944u;
    {
        const bool branch_taken_0x39d944 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x39D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D944u;
        // 0x39d948: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d944) {
            ctx->pc = 0x39D958u;
            goto label_39d958;
        }
    }
    ctx->pc = 0x39D94Cu;
    // 0x39d94c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39D94Cu;
    {
        const bool branch_taken_0x39d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D94Cu;
        // 0x39d950: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d94c) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D954u;
    // 0x39d954: 0x0  nop
    ctx->pc = 0x39d954u;
    // NOP
label_39d958:
    // 0x39d958: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39D958u;
    SET_GPR_U32(ctx, 31, 0x39D960u);
    ctx->pc = 0x39D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D958u;
    // 0x39d95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39D958u, 0x39D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D960u;
label_39d960:
    // 0x39d960: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x39d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x39d964: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39d964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39d968: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D968u;
    {
        const bool branch_taken_0x39d968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D968u;
        // 0x39d96c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d968) {
            ctx->pc = 0x39D978u;
            goto label_39d978;
        }
    }
    ctx->pc = 0x39D970u;
    // 0x39d970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39D970u;
    {
        const bool branch_taken_0x39d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D970u;
        // 0x39d974: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d970) {
            ctx->pc = 0x39D980u;
            goto label_39d980;
        }
    }
    ctx->pc = 0x39D978u;
label_39d978:
    // 0x39d978: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39d978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39d97c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d97cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39d980:
    // 0x39d980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39d980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39d984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39d984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39d988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39d988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d990: 0x3e00008  jr          $ra
    ctx->pc = 0x39D990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D990u;
        // 0x39d994: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D998u;
}

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

// Function: sub_0033D7A0
// Address: 0x33d7a0 - 0x33df34
void sub_0033D7A0_0x33d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D7A0_0x33d7a0");
#endif

    switch (ctx->pc) {
        case 0x33d87cu: goto label_33d87c;
        case 0x33d898u: goto label_33d898;
        case 0x33d900u: goto label_33d900;
        case 0x33d918u: goto label_33d918;
        case 0x33d928u: goto label_33d928;
        case 0x33d9ecu: goto label_33d9ec;
        case 0x33da08u: goto label_33da08;
        case 0x33da14u: goto label_33da14;
        case 0x33da20u: goto label_33da20;
        case 0x33da3cu: goto label_33da3c;
        case 0x33da48u: goto label_33da48;
        case 0x33da54u: goto label_33da54;
        case 0x33da64u: goto label_33da64;
        case 0x33da70u: goto label_33da70;
        case 0x33da7cu: goto label_33da7c;
        case 0x33da8cu: goto label_33da8c;
        case 0x33dbd8u: goto label_33dbd8;
        case 0x33dbe8u: goto label_33dbe8;
        case 0x33dc00u: goto label_33dc00;
        case 0x33dc10u: goto label_33dc10;
        case 0x33dc9cu: goto label_33dc9c;
        case 0x33dca4u: goto label_33dca4;
        case 0x33dcacu: goto label_33dcac;
        case 0x33dcdcu: goto label_33dcdc;
        case 0x33dda4u: goto label_33dda4;
        case 0x33ddb8u: goto label_33ddb8;
        case 0x33de30u: goto label_33de30;
        case 0x33de9cu: goto label_33de9c;
        case 0x33deb8u: goto label_33deb8;
        case 0x33dec0u: goto label_33dec0;
        case 0x33deccu: goto label_33decc;
        case 0x33ded8u: goto label_33ded8;
        default: break;
    }

    ctx->pc = 0x33d7a0u;

    // 0x33d7a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33d7a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33d7a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33d7ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33d7b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x33d7b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33d7b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33d7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33d7b8: 0x83838b8c  lb          $v1, -0x7474($gp)
    ctx->pc = 0x33d7b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937484)));
    // 0x33d7bc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33D7BCu;
    {
        const bool branch_taken_0x33d7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7BCu;
        // 0x33d7c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7bc) {
            ctx->pc = 0x33D7E8u;
            goto label_33d7e8;
        }
    }
    ctx->pc = 0x33D7C4u;
    // 0x33d7c4: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x33d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d7c8: 0x3c03c21c  lui         $v1, 0xC21C
    ctx->pc = 0x33d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49692 << 16));
    // 0x33d7cc: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x33d7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33d7d0: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x33d7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x33d7d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33d7d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d7dc: 0xa3838b8c  sb          $v1, -0x7474($gp)
    ctx->pc = 0x33d7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937484), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d7e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x33d7e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33d7e4: 0xe420f038  swc1        $f0, -0xFC8($at)
    ctx->pc = 0x33d7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x67F038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67F038u, _value); } while (0); }
label_33d7e8:
    // 0x33d7e8: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x33d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x33d7ec: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33d7f0: 0xae0306ac  sw          $v1, 0x6AC($s0)
    ctx->pc = 0x33d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 3));
    // 0x33d7f4: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x33d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x33d7f8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33d7fc: 0xae0306b4  sw          $v1, 0x6B4($s0)
    ctx->pc = 0x33d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
    // 0x33d800: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33d804: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x33d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x33d808: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33d808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33d80c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33d810: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x33d810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x33d814: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33d814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33d818: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33d81c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x33d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x33d820: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33d820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33d824: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33d824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33d828: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x33d828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x33d82c: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33d830: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33d830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33d834: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x33d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x33d838: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33d838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33d83c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33d840: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x33d840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x33d844: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33d848: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x33d848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x33d84c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x33d84cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x33d850: 0x10200179  beqz        $at, . + 4 + (0x179 << 2)
    ctx->pc = 0x33D850u;
    {
        const bool branch_taken_0x33d850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D850u;
        // 0x33d854: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d850) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33D858u;
    // 0x33d858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33d858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d85c: 0x2484f040  addiu       $a0, $a0, -0xFC0
    ctx->pc = 0x33d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963264));
    // 0x33d860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33d864: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d868: 0x600008  jr          $v1
    ctx->pc = 0x33D868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33D870u: goto label_33d870;
            case 0x33D9B8u: goto label_33d9b8;
            case 0x33DB30u: goto label_33db30;
            case 0x33DBC8u: goto label_33dbc8;
            case 0x33DCB8u: goto label_33dcb8;
            case 0x33DDB0u: goto label_33ddb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D868u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D870u;
label_33d870:
    // 0x33d870: 0x26040890  addiu       $a0, $s0, 0x890
    ctx->pc = 0x33d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x33d874: 0xc096908  jal         func_25A420
    ctx->pc = 0x33D874u;
    SET_GPR_U32(ctx, 31, 0x33D87Cu);
    ctx->pc = 0x33D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D874u;
    // 0x33d878: 0x26050880  addiu       $a1, $s0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x33D874u, 0x33D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D87Cu;
label_33d87c:
    // 0x33d87c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x33d87cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x33d880: 0x26040880  addiu       $a0, $s0, 0x880
    ctx->pc = 0x33d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x33d884: 0xc6010894  lwc1        $f1, 0x894($s0)
    ctx->pc = 0x33d884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d888: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x33d888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x33d88c: 0xc6000884  lwc1        $f0, 0x884($s0)
    ctx->pc = 0x33d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d890: 0xc096908  jal         func_25A420
    ctx->pc = 0x33D890u;
    SET_GPR_U32(ctx, 31, 0x33D898u);
    ctx->pc = 0x33D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D890u;
    // 0x33d894: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x33D890u, 0x33D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D898u;
label_33d898:
    // 0x33d898: 0xc6050884  lwc1        $f5, 0x884($s0)
    ctx->pc = 0x33d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33d89c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x33d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x33d8a0: 0xc6040874  lwc1        $f4, 0x874($s0)
    ctx->pc = 0x33d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33d8a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x33d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x33d8a8: 0xc423f038  lwc1        $f3, -0xFC8($at)
    ctx->pc = 0x33d8a8u;
    { uint32_t bits = FAST_READ32(0x67F038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d8ac: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x33d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33d8b0: 0x4615a882  mul.s       $f2, $f21, $f21
    ctx->pc = 0x33d8b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x33d8b4: 0x26050880  addiu       $a1, $s0, 0x880
    ctx->pc = 0x33d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x33d8b8: 0x26060870  addiu       $a2, $s0, 0x870
    ctx->pc = 0x33d8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x33d8bc: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x33d8bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x33d8c0: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x33d8c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x33d8c4: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x33d8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x33d8c8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x33d8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x33d8cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d8d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33d8d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33d8d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33d8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d8d8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x33d8d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x33d8dc: 0x46000004  c1          0x4
    ctx->pc = 0x33d8dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x33d8e0: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x33d8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33d8e4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x33d8e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x33d8e8: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x33d8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x33d8ec: 0x46000504  c1          0x504
    ctx->pc = 0x33d8ecu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x33d8f0: 0x0  nop
    ctx->pc = 0x33d8f0u;
    // NOP
    // 0x33d8f4: 0x0  nop
    ctx->pc = 0x33d8f4u;
    // NOP
    // 0x33d8f8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x33D8F8u;
    SET_GPR_U32(ctx, 31, 0x33D900u);
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x33D8F8u, 0x33D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D900u;
label_33d900:
    // 0x33d900: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x33d900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x33d904: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x33d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x33d908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d90c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33d90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33d910: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x33D910u;
    SET_GPR_U32(ctx, 31, 0x33D918u);
    ctx->pc = 0x33D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D910u;
    // 0x33d914: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x33D910u, 0x33D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D918u;
label_33d918:
    // 0x33d918: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x33d918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33d91c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33d91cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x33d920: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x33D920u;
    SET_GPR_U32(ctx, 31, 0x33D928u);
    ctx->pc = 0x33D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D920u;
    // 0x33d924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x33D920u, 0x33D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D928u;
label_33d928:
    // 0x33d928: 0xe614009c  swc1        $f20, 0x9C($s0)
    ctx->pc = 0x33d928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x33d92c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x33d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x33d930: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d934: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x33d934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x33d938: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x33d938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33d93c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x33d93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x33d940: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33d940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d944: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x33d948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d94c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33d94cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33d950: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33d950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33d954: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33d954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d958: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33D958u;
    {
        const bool branch_taken_0x33d958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d958) {
            ctx->pc = 0x33D970u;
            goto label_33d970;
        }
    }
    ctx->pc = 0x33D960u;
    // 0x33d960: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33d964: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33d964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33d968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D968u;
    {
        const bool branch_taken_0x33d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D968u;
        // 0x33d96c: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d968) {
            ctx->pc = 0x33D98Cu;
            goto label_33d98c;
        }
    }
    ctx->pc = 0x33D970u;
label_33d970:
    // 0x33d970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d974: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d978: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33d97c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33d97cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33d980: 0x0  nop
    ctx->pc = 0x33d980u;
    // NOP
    // 0x33d984: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33d984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33d988: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33d98c:
    // 0x33d98c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x33d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33d990: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d998: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x33d998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x33d99c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x33d99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33d9a0: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x33d9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x33d9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d9a8: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x33d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x33d9ac: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x33d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d9b0: 0xa6002b20  sh          $zero, 0x2B20($s0)
    ctx->pc = 0x33d9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 0));
    // 0x33d9b4: 0x0  nop
    ctx->pc = 0x33d9b4u;
    // NOP
label_33d9b8:
    // 0x33d9b8: 0x86042b20  lh          $a0, 0x2B20($s0)
    ctx->pc = 0x33d9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x33d9bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x33d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33d9c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33d9c4: 0xa6042b20  sh          $a0, 0x2B20($s0)
    ctx->pc = 0x33d9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 4));
    // 0x33d9c8: 0x86042b20  lh          $a0, 0x2B20($s0)
    ctx->pc = 0x33d9c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x33d9cc: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x33D9CCu;
    {
        const bool branch_taken_0x33d9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d9cc) {
            ctx->pc = 0x33DA90u;
            goto label_33da90;
        }
    }
    ctx->pc = 0x33D9D4u;
    // 0x33d9d4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x33d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33d9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d9dc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x33d9e0: 0x78420530  lq          $v0, 0x530($v0)
    ctx->pc = 0x33d9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1328)));
    // 0x33d9e4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x33D9E4u;
    SET_GPR_U32(ctx, 31, 0x33D9ECu);
    ctx->pc = 0x33D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D9E4u;
    // 0x33d9e8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33D9E4u, 0x33D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D9ECu;
label_33d9ec:
    // 0x33d9ec: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33d9ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x33d9f0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x33d9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33d9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d9f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x33d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d9fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33d9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da00: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x33DA00u;
    SET_GPR_U32(ctx, 31, 0x33DA08u);
    ctx->pc = 0x33DA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA00u;
    // 0x33da04: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x33DA00u, 0x33DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA08u;
label_33da08:
    // 0x33da08: 0x8e042950  lw          $a0, 0x2950($s0)
    ctx->pc = 0x33da08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    // 0x33da0c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x33DA0Cu;
    SET_GPR_U32(ctx, 31, 0x33DA14u);
    ctx->pc = 0x33DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA0Cu;
    // 0x33da10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x33DA0Cu, 0x33DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA14u;
label_33da14:
    // 0x33da14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da18: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x33DA18u;
    SET_GPR_U32(ctx, 31, 0x33DA20u);
    ctx->pc = 0x33DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA18u;
    // 0x33da1c: 0xae112950  sw          $s1, 0x2950($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 10576), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33DA18u, 0x33DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA20u;
label_33da20:
    // 0x33da20: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33da20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x33da24: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x33da24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33da28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da2c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x33da2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33da30: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33da30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da34: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x33DA34u;
    SET_GPR_U32(ctx, 31, 0x33DA3Cu);
    ctx->pc = 0x33DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA34u;
    // 0x33da38: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x33DA34u, 0x33DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA3Cu;
label_33da3c:
    // 0x33da3c: 0x8e042954  lw          $a0, 0x2954($s0)
    ctx->pc = 0x33da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10580)));
    // 0x33da40: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x33DA40u;
    SET_GPR_U32(ctx, 31, 0x33DA48u);
    ctx->pc = 0x33DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA40u;
    // 0x33da44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x33DA40u, 0x33DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA48u;
label_33da48:
    // 0x33da48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da4c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x33DA4Cu;
    SET_GPR_U32(ctx, 31, 0x33DA54u);
    ctx->pc = 0x33DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA4Cu;
    // 0x33da50: 0xae112954  sw          $s1, 0x2954($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 10580), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33DA4Cu, 0x33DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA54u;
label_33da54:
    // 0x33da54: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33da54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x33da58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33da58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da5c: 0xc0a9908  jal         func_2A6420
    ctx->pc = 0x33DA5Cu;
    SET_GPR_U32(ctx, 31, 0x33DA64u);
    ctx->pc = 0x33DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA5Cu;
    // 0x33da60: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6420u, 0x33DA5Cu, 0x33DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA64u;
label_33da64:
    // 0x33da64: 0x8e042958  lw          $a0, 0x2958($s0)
    ctx->pc = 0x33da64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10584)));
    // 0x33da68: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x33DA68u;
    SET_GPR_U32(ctx, 31, 0x33DA70u);
    ctx->pc = 0x33DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA68u;
    // 0x33da6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x33DA68u, 0x33DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA70u;
label_33da70:
    // 0x33da70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33da70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da74: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x33DA74u;
    SET_GPR_U32(ctx, 31, 0x33DA7Cu);
    ctx->pc = 0x33DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA74u;
    // 0x33da78: 0xae112958  sw          $s1, 0x2958($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 10584), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33DA74u, 0x33DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA7Cu;
label_33da7c:
    // 0x33da7c: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33da7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x33da80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33da84: 0xc0a9918  jal         func_2A6460
    ctx->pc = 0x33DA84u;
    SET_GPR_U32(ctx, 31, 0x33DA8Cu);
    ctx->pc = 0x33DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DA84u;
    // 0x33da88: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6460u, 0x33DA84u, 0x33DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DA8Cu;
label_33da8c:
    // 0x33da8c: 0x0  nop
    ctx->pc = 0x33da8cu;
    // NOP
label_33da90:
    // 0x33da90: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33da90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x33da94: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x33DA94u;
    {
        const bool branch_taken_0x33da94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da94) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DA9Cu;
    // 0x33da9c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33daa0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x33daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x33daa4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x33daa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33daa8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x33daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x33daac: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x33daacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x33dab0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x33dab4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33dab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33dab8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33dab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33dabc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33dabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dac0: 0x0  nop
    ctx->pc = 0x33dac0u;
    // NOP
    // 0x33dac4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33dac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33dac8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33dac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dacc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33DACCu;
    {
        const bool branch_taken_0x33dacc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dacc) {
            ctx->pc = 0x33DAE4u;
            goto label_33dae4;
        }
    }
    ctx->pc = 0x33DAD4u;
    // 0x33dad4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33dad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33dad8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33dad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33dadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DADCu;
    {
        const bool branch_taken_0x33dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DADCu;
        // 0x33dae0: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dadc) {
            ctx->pc = 0x33DB00u;
            goto label_33db00;
        }
    }
    ctx->pc = 0x33DAE4u;
label_33dae4:
    // 0x33dae4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33dae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33dae8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33daec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33daecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33daf0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33daf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33daf4: 0x0  nop
    ctx->pc = 0x33daf4u;
    // NOP
    // 0x33daf8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33daf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33dafc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33dafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33db00:
    // 0x33db00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33db00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33db04: 0x240400e1  addiu       $a0, $zero, 0xE1
    ctx->pc = 0x33db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x33db08: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33db08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33db0c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x33db0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x33db10: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33db10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33db14: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x33db14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x33db18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33db1c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x33db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x33db20: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x33db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33db24: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x33db24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x33db28: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x33DB28u;
    {
        const bool branch_taken_0x33db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB28u;
        // 0x33db2c: 0xa6032b20  sh          $v1, 0x2B20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db28) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DB30u;
label_33db30:
    // 0x33db30: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33db30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x33db34: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x33DB34u;
    {
        const bool branch_taken_0x33db34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33db34) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DB3Cu;
    // 0x33db3c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33db40: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x33db40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x33db44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x33db44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33db48: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x33db48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x33db4c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x33db4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x33db50: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x33db54: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33db54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33db58: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33db58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33db5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33db5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33db60: 0x0  nop
    ctx->pc = 0x33db60u;
    // NOP
    // 0x33db64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33db64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33db68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33db68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33db6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33DB6Cu;
    {
        const bool branch_taken_0x33db6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33db6c) {
            ctx->pc = 0x33DB84u;
            goto label_33db84;
        }
    }
    ctx->pc = 0x33DB74u;
    // 0x33db74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33db74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33db78: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33db78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33db7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DB7Cu;
    {
        const bool branch_taken_0x33db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB7Cu;
        // 0x33db80: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db7c) {
            ctx->pc = 0x33DBA0u;
            goto label_33dba0;
        }
    }
    ctx->pc = 0x33DB84u;
label_33db84:
    // 0x33db84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33db84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33db88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33db88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33db8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33db8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33db90: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33db90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33db94: 0x0  nop
    ctx->pc = 0x33db94u;
    // NOP
    // 0x33db98: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33db98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33db9c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33db9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33dba0:
    // 0x33dba0: 0x240300e2  addiu       $v1, $zero, 0xE2
    ctx->pc = 0x33dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x33dba4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33dba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33dba8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x33dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x33dbac: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x33dbacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x33dbb0: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x33dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x33dbb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33dbb8: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x33dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x33dbbc: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x33DBBCu;
    {
        const bool branch_taken_0x33dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBBCu;
        // 0x33dbc0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dbbc) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DBC4u;
    // 0x33dbc4: 0x0  nop
    ctx->pc = 0x33dbc4u;
    // NOP
label_33dbc8:
    // 0x33dbc8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x33dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33dbcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33dbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dbd0: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x33DBD0u;
    SET_GPR_U32(ctx, 31, 0x33DBD8u);
    ctx->pc = 0x33DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DBD0u;
    // 0x33dbd4: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x33DBD0u, 0x33DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DBD8u;
label_33dbd8:
    // 0x33dbd8: 0x26040880  addiu       $a0, $s0, 0x880
    ctx->pc = 0x33dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x33dbdc: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x33dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x33dbe0: 0xc0cf5c8  jal         func_33D720
    ctx->pc = 0x33DBE0u;
    SET_GPR_U32(ctx, 31, 0x33DBE8u);
    ctx->pc = 0x33DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DBE0u;
    // 0x33dbe4: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D720u, 0x33DBE0u, 0x33DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DBE8u;
label_33dbe8:
    // 0x33dbe8: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x33DBE8u;
    {
        const bool branch_taken_0x33dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dbe8) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DBF0u;
    // 0x33dbf0: 0xc60c009c  lwc1        $f12, 0x9C($s0)
    ctx->pc = 0x33dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33dbf4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x33dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33dbf8: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x33DBF8u;
    SET_GPR_U32(ctx, 31, 0x33DC00u);
    ctx->pc = 0x33DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DBF8u;
    // 0x33dbfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x33DBF8u, 0x33DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DC00u;
label_33dc00:
    // 0x33dc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33dc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dc04: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x33dc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x33dc08: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x33DC08u;
    SET_GPR_U32(ctx, 31, 0x33DC10u);
    ctx->pc = 0x33DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DC08u;
    // 0x33dc0c: 0x24060155  addiu       $a2, $zero, 0x155 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x33DC08u, 0x33DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DC10u;
label_33dc10:
    // 0x33dc10: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dc14: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x33dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x33dc18: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33dc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33dc1c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x33dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x33dc20: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x33dc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x33dc24: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33dc28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33dc28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33dc2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33dc2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dc34: 0x0  nop
    ctx->pc = 0x33dc34u;
    // NOP
    // 0x33dc38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33dc38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33dc3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33dc3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dc40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33DC40u;
    {
        const bool branch_taken_0x33dc40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dc40) {
            ctx->pc = 0x33DC58u;
            goto label_33dc58;
        }
    }
    ctx->pc = 0x33DC48u;
    // 0x33dc48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33dc48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33dc4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33dc4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33dc50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DC50u;
    {
        const bool branch_taken_0x33dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC50u;
        // 0x33dc54: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc50) {
            ctx->pc = 0x33DC74u;
            goto label_33dc74;
        }
    }
    ctx->pc = 0x33DC58u;
label_33dc58:
    // 0x33dc58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33dc58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33dc5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33dc60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33dc60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33dc64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33dc64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33dc68: 0x0  nop
    ctx->pc = 0x33dc68u;
    // NOP
    // 0x33dc6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33dc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33dc70: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33dc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33dc74:
    // 0x33dc74: 0x240200e3  addiu       $v0, $zero, 0xE3
    ctx->pc = 0x33dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x33dc78: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33dc78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33dc7c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x33dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x33dc80: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x33dc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x33dc84: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x33dc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x33dc88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33dc8c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x33dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x33dc90: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x33dc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x33dc94: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x33DC94u;
    SET_GPR_U32(ctx, 31, 0x33DC9Cu);
    ctx->pc = 0x33DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DC94u;
    // 0x33dc98: 0x8e042950  lw          $a0, 0x2950($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x33DC94u, 0x33DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DC9Cu;
label_33dc9c:
    // 0x33dc9c: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x33DC9Cu;
    SET_GPR_U32(ctx, 31, 0x33DCA4u);
    ctx->pc = 0x33DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DC9Cu;
    // 0x33dca0: 0x8e042954  lw          $a0, 0x2954($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x33DC9Cu, 0x33DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCA4u;
label_33dca4:
    // 0x33dca4: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x33DCA4u;
    SET_GPR_U32(ctx, 31, 0x33DCACu);
    ctx->pc = 0x33DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCA4u;
    // 0x33dca8: 0x8e042958  lw          $a0, 0x2958($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x33DCA4u, 0x33DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCACu;
label_33dcac:
    // 0x33dcac: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x33DCACu;
    {
        const bool branch_taken_0x33dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dcac) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DCB4u;
    // 0x33dcb4: 0x0  nop
    ctx->pc = 0x33dcb4u;
    // NOP
label_33dcb8:
    // 0x33dcb8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x33dcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x33dcbc: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x33dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dcc0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x33dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33dcc4: 0xc420f038  lwc1        $f0, -0xFC8($at)
    ctx->pc = 0x33dcc4u;
    { uint32_t bits = FAST_READ32(0x67F038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dcc8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33dcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dccc: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x33dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33dcd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33dcd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33dcd4: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x33DCD4u;
    SET_GPR_U32(ctx, 31, 0x33DCDCu);
    ctx->pc = 0x33DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCD4u;
    // 0x33dcd8: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x33DCD4u, 0x33DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCDCu;
label_33dcdc:
    // 0x33dcdc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x33dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dce0: 0xc6000894  lwc1        $f0, 0x894($s0)
    ctx->pc = 0x33dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dce4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33dce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dce8: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x33DCE8u;
    {
        const bool branch_taken_0x33dce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dce8) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DCF0u;
    // 0x33dcf0: 0x7a040890  lq          $a0, 0x890($s0)
    ctx->pc = 0x33dcf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x33dcf4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x33dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x33dcf8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33dcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33dcfc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x33dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x33dd00: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x33dd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x33dd04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33dd08: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x33dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x33dd0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33dd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33dd10: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dd14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dd18: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33dd18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33dd1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33dd1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33dd20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33dd20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dd24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33DD24u;
    {
        const bool branch_taken_0x33dd24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dd24) {
            ctx->pc = 0x33DD3Cu;
            goto label_33dd3c;
        }
    }
    ctx->pc = 0x33DD2Cu;
    // 0x33dd2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33dd2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33dd30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33dd30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33dd34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DD34u;
    {
        const bool branch_taken_0x33dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD34u;
        // 0x33dd38: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd34) {
            ctx->pc = 0x33DD58u;
            goto label_33dd58;
        }
    }
    ctx->pc = 0x33DD3Cu;
label_33dd3c:
    // 0x33dd3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33dd3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33dd40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33dd44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33dd44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33dd48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33dd48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33dd4c: 0x0  nop
    ctx->pc = 0x33dd4cu;
    // NOP
    // 0x33dd50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33dd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33dd54: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33dd54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33dd58:
    // 0x33dd58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33dd5c: 0x240300e4  addiu       $v1, $zero, 0xE4
    ctx->pc = 0x33dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x33dd60: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33dd60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33dd64: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x33dd64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x33dd68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33dd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33dd6c: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x33dd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x33dd70: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x33dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33dd74: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x33dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x33dd78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33dd7c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x33dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x33dd80: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x33dd80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x33dd84: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x33dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x33dd88: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x33dd88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33dd8c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33dd8cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657570u));
    // 0x33dd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33dd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd94: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x33dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x33dd98: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x33dd98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd9c: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x33DD9Cu;
    SET_GPR_U32(ctx, 31, 0x33DDA4u);
    ctx->pc = 0x33DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DD9Cu;
    // 0x33dda0: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x33DD9Cu, 0x33DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDA4u;
label_33dda4:
    // 0x33dda4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x33DDA4u;
    {
        const bool branch_taken_0x33dda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dda4) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DDACu;
    // 0x33ddac: 0x0  nop
    ctx->pc = 0x33ddacu;
    // NOP
label_33ddb0:
    // 0x33ddb0: 0xc0a6c74  jal         func_29B1D0
    ctx->pc = 0x33DDB0u;
    SET_GPR_U32(ctx, 31, 0x33DDB8u);
    ctx->pc = 0x33DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDB0u;
    // 0x33ddb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B1D0u, 0x33DDB0u, 0x33DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDB8u;
label_33ddb8:
    // 0x33ddb8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33ddb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x33ddbc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x33DDBCu;
    {
        const bool branch_taken_0x33ddbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ddbc) {
            ctx->pc = 0x33DE38u;
            goto label_33de38;
        }
    }
    ctx->pc = 0x33DDC4u;
    // 0x33ddc4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ddc8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x33ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x33ddcc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33ddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33ddd0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x33ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x33ddd4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x33ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x33ddd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33dddc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33dddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33dde0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33dde0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dde8: 0x0  nop
    ctx->pc = 0x33dde8u;
    // NOP
    // 0x33ddec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33ddecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33ddf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33ddf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ddf4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33DDF4u;
    {
        const bool branch_taken_0x33ddf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ddf4) {
            ctx->pc = 0x33DE0Cu;
            goto label_33de0c;
        }
    }
    ctx->pc = 0x33DDFCu;
    // 0x33ddfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33ddfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33de00: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x33de00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33de04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DE04u;
    {
        const bool branch_taken_0x33de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE04u;
        // 0x33de08: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de04) {
            ctx->pc = 0x33DE28u;
            goto label_33de28;
        }
    }
    ctx->pc = 0x33DE0Cu;
label_33de0c:
    // 0x33de0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33de0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33de10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33de14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33de14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33de18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x33de18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33de1c: 0x0  nop
    ctx->pc = 0x33de1cu;
    // NOP
    // 0x33de20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33de20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33de24: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33de24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33de28:
    // 0x33de28: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x33DE28u;
    SET_GPR_U32(ctx, 31, 0x33DE30u);
    ctx->pc = 0x33DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DE28u;
    // 0x33de2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x33DE28u, 0x33DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DE30u;
label_33de30:
    // 0x33de30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33de34: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x33de34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_33de38:
    // 0x33de38: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x33de38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x33de3c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x33de3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x33de40: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x33DE40u;
    {
        const bool branch_taken_0x33de40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de40) {
            ctx->pc = 0x33DF18u;
            goto label_33df18;
        }
    }
    ctx->pc = 0x33DE48u;
    // 0x33de48: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x33de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33de4c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x33de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x33de50: 0x78630530  lq          $v1, 0x530($v1)
    ctx->pc = 0x33de50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 1328)));
    // 0x33de54: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x33de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x33de58: 0x86042b20  lh          $a0, 0x2B20($s0)
    ctx->pc = 0x33de58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x33de5c: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x33de5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x33de60: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x33DE60u;
    {
        const bool branch_taken_0x33de60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33de60) {
            ctx->pc = 0x33DF18u;
            goto label_33df18;
        }
    }
    ctx->pc = 0x33DE68u;
    // 0x33de68: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x33de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x33de6c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x33de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x33de70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33de70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33de74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33de74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33de78: 0x0  nop
    ctx->pc = 0x33de78u;
    // NOP
    // 0x33de7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33de7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33de80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33de84: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33de84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33de88: 0x0  nop
    ctx->pc = 0x33de88u;
    // NOP
    // 0x33de8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x33de8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33de90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x33de90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33de94: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x33DE94u;
    SET_GPR_U32(ctx, 31, 0x33DE9Cu);
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x33DE94u, 0x33DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DE9Cu;
label_33de9c:
    // 0x33de9c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x33de9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33dea0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33dea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x33dea4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33dea8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x33dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33deac: 0x26062b10  addiu       $a2, $s0, 0x2B10
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11024));
    // 0x33deb0: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x33DEB0u;
    SET_GPR_U32(ctx, 31, 0x33DEB8u);
    ctx->pc = 0x33DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DEB0u;
    // 0x33deb4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x33DEB0u, 0x33DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DEB8u;
label_33deb8:
    // 0x33deb8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x33DEB8u;
    SET_GPR_U32(ctx, 31, 0x33DEC0u);
    ctx->pc = 0x33DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DEB8u;
    // 0x33debc: 0x8e042950  lw          $a0, 0x2950($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x33DEB8u, 0x33DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DEC0u;
label_33dec0:
    // 0x33dec0: 0x8e042954  lw          $a0, 0x2954($s0)
    ctx->pc = 0x33dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10580)));
    // 0x33dec4: 0xc096c80  jal         func_25B200
    ctx->pc = 0x33DEC4u;
    SET_GPR_U32(ctx, 31, 0x33DECCu);
    ctx->pc = 0x33DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DEC4u;
    // 0x33dec8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x33DEC4u, 0x33DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DECCu;
label_33decc:
    // 0x33decc: 0x8e042958  lw          $a0, 0x2958($s0)
    ctx->pc = 0x33deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10584)));
    // 0x33ded0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x33DED0u;
    SET_GPR_U32(ctx, 31, 0x33DED8u);
    ctx->pc = 0x33DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DED0u;
    // 0x33ded4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x33DED0u, 0x33DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DED8u;
label_33ded8:
    // 0x33ded8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DED8u;
    {
        const bool branch_taken_0x33ded8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ded8) {
            ctx->pc = 0x33DEF0u;
            goto label_33def0;
        }
    }
    ctx->pc = 0x33DEE0u;
    // 0x33dee0: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x33dee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33dee4: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x33dee4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x33dee8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x33dee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33deec: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x33deecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
label_33def0:
    // 0x33def0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DEF0u;
    {
        const bool branch_taken_0x33def0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33def0) {
            ctx->pc = 0x33DF08u;
            goto label_33df08;
        }
    }
    ctx->pc = 0x33DEF8u;
    // 0x33def8: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x33def8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33defc: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x33defcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x33df00: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x33df00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33df04: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x33df04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
label_33df08:
    // 0x33df08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33DF08u;
    {
        const bool branch_taken_0x33df08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df08) {
            ctx->pc = 0x33DF18u;
            goto label_33df18;
        }
    }
    ctx->pc = 0x33DF10u;
    // 0x33df10: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x33df10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33df14: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x33df14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_33df18:
    // 0x33df18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33df1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33df1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33df20: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x33df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33df24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33df24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33df28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x33DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF2Cu;
        // 0x33df30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DF34u;
}

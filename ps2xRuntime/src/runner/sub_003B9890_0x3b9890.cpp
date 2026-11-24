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

// Function: sub_003B9890
// Address: 0x3b9890 - 0x3b9a40
void sub_003B9890_0x3b9890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9890_0x3b9890");
#endif

    switch (ctx->pc) {
        case 0x3b9964u: goto label_3b9964;
        case 0x3b9994u: goto label_3b9994;
        case 0x3b9a10u: goto label_3b9a10;
        case 0x3b9a24u: goto label_3b9a24;
        default: break;
    }

    ctx->pc = 0x3b9890u;

    // 0x3b9890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b9894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b989c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b98a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b98a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b98a4: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3b98a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3b98a8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3B98A8u;
    {
        const bool branch_taken_0x3b98a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98A8u;
        // 0x3b98ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98a8) {
            ctx->pc = 0x3B9980u;
            goto label_3b9980;
        }
    }
    ctx->pc = 0x3B98B0u;
    // 0x3b98b0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B98B0u;
    {
        const bool branch_taken_0x3b98b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b98b0) {
            ctx->pc = 0x3B9900u;
            goto label_3b9900;
        }
    }
    ctx->pc = 0x3B98B8u;
    // 0x3b98b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B98B8u;
    {
        const bool branch_taken_0x3b98b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98b8) {
            ctx->pc = 0x3B98C8u;
            goto label_3b98c8;
        }
    }
    ctx->pc = 0x3B98C0u;
    // 0x3b98c0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3B98C0u;
    {
        const bool branch_taken_0x3b98c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b98c0) {
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B98C8u;
label_3b98c8:
    // 0x3b98c8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3b98c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b98cc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3b98ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b98d0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3b98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3b98d4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3b98d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b98d8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3b98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3b98dc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3b98dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b98e0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3b98e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3b98e4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3b98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3b98e8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3b98e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3b98ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b98f0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3b98f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b98f4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3B98F4u;
    {
        const bool branch_taken_0x3b98f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98F4u;
        // 0x3b98f8: 0xa6000826  sh          $zero, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98f4) {
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B98FCu;
    // 0x3b98fc: 0x0  nop
    ctx->pc = 0x3b98fcu;
    // NOP
label_3b9900:
    // 0x3b9900: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3b9900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3b9904: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B9904u;
    {
        const bool branch_taken_0x3b9904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9904) {
            ctx->pc = 0x3B9970u;
            goto label_3b9970;
        }
    }
    ctx->pc = 0x3B990Cu;
    // 0x3b990c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3b990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3b9910: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3b9910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3b9914: 0x2861001c  slti        $at, $v1, 0x1C
    ctx->pc = 0x3b9914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x3b9918: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B9918u;
    {
        const bool branch_taken_0x3b9918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9918) {
            ctx->pc = 0x3B9970u;
            goto label_3b9970;
        }
    }
    ctx->pc = 0x3B9920u;
    // 0x3b9920: 0x92042b5a  lbu         $a0, 0x2B5A($s0)
    ctx->pc = 0x3b9920u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11098)));
    // 0x3b9924: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3b9924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3b9928: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B9928u;
    {
        const bool branch_taken_0x3b9928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9928u;
        // 0x3b992c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9928) {
            ctx->pc = 0x3B9958u;
            goto label_3b9958;
        }
    }
    ctx->pc = 0x3B9930u;
    // 0x3b9930: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9930u;
    {
        const bool branch_taken_0x3b9930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9930) {
            ctx->pc = 0x3B9958u;
            goto label_3b9958;
        }
    }
    ctx->pc = 0x3B9938u;
    // 0x3b9938: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b9938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b993c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B993Cu;
    {
        const bool branch_taken_0x3b993c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B993Cu;
        // 0x3b9940: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b993c) {
            ctx->pc = 0x3B9958u;
            goto label_3b9958;
        }
    }
    ctx->pc = 0x3B9944u;
    // 0x3b9944: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9944u;
    {
        const bool branch_taken_0x3b9944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9944) {
            ctx->pc = 0x3B9958u;
            goto label_3b9958;
        }
    }
    ctx->pc = 0x3B994Cu;
    // 0x3b994c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B994Cu;
    {
        const bool branch_taken_0x3b994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b994c) {
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B9954u;
    // 0x3b9954: 0x0  nop
    ctx->pc = 0x3b9954u;
    // NOP
label_3b9958:
    // 0x3b9958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b995c: 0xc0ef2e4  jal         func_3BCB90
    ctx->pc = 0x3B995Cu;
    SET_GPR_U32(ctx, 31, 0x3B9964u);
    ctx->pc = 0x3B9960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B995Cu;
    // 0x3b9960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB90u, 0x3B995Cu, 0x3B9964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9964u;
label_3b9964:
    // 0x3b9964: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3B9964u;
    {
        const bool branch_taken_0x3b9964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9964) {
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B996Cu;
    // 0x3b996c: 0x0  nop
    ctx->pc = 0x3b996cu;
    // NOP
label_3b9970:
    // 0x3b9970: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3b9970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3b9974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b9978: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3b9978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b997c: 0x0  nop
    ctx->pc = 0x3b997cu;
    // NOP
label_3b9980:
    // 0x3b9980: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x3b9980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3b9984: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9984u;
    {
        const bool branch_taken_0x3b9984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9984u;
        // 0x3b9988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9984) {
            ctx->pc = 0x3B99A0u;
            goto label_3b99a0;
        }
    }
    ctx->pc = 0x3B998Cu;
    // 0x3b998c: 0xc0ee690  jal         func_3B9A40
    ctx->pc = 0x3B998Cu;
    SET_GPR_U32(ctx, 31, 0x3B9994u);
    ctx->pc = 0x3B9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9A40u, 0x3B998Cu, 0x3B9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9994u;
label_3b9994:
    // 0x3b9994: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B9994u;
    {
        const bool branch_taken_0x3b9994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9994) {
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B999Cu;
    // 0x3b999c: 0x0  nop
    ctx->pc = 0x3b999cu;
    // NOP
label_3b99a0:
    // 0x3b99a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b99a4: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3b99a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b99a8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b99ac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b99acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b99b0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3b99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3b99b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b99b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b99b8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b99b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b99bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b99bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b99c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b99c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b99c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b99c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b99c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b99cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b99ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b99d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b99d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b99d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B99D4u;
    {
        const bool branch_taken_0x3b99d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b99d4) {
            ctx->pc = 0x3B99ECu;
            goto label_3b99ec;
        }
    }
    ctx->pc = 0x3B99DCu;
    // 0x3b99dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b99dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b99e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b99e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b99e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B99E4u;
    {
        const bool branch_taken_0x3b99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B99E4u;
        // 0x3b99e8: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b99e4) {
            ctx->pc = 0x3B9A08u;
            goto label_3b9a08;
        }
    }
    ctx->pc = 0x3B99ECu;
label_3b99ec:
    // 0x3b99ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b99ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b99f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b99f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b99f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b99f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b99f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b99fc: 0x0  nop
    ctx->pc = 0x3b99fcu;
    // NOP
    // 0x3b9a00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b9a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b9a04: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3b9a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b9a08:
    // 0x3b9a08: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x3B9A08u;
    SET_GPR_U32(ctx, 31, 0x3B9A10u);
    ctx->pc = 0x3B9A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A08u;
    // 0x3b9a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x3B9A08u, 0x3B9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A10u;
label_3b9a10:
    // 0x3b9a10: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3b9a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3b9a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b9a1c: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3B9A1Cu;
    SET_GPR_U32(ctx, 31, 0x3B9A24u);
    ctx->pc = 0x3B9A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9A1Cu;
    // 0x3b9a20: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3B9A1Cu, 0x3B9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A24u;
label_3b9a24:
    // 0x3b9a24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B9A24u;
    {
        const bool branch_taken_0x3b9a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A24u;
        // 0x3b9a28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a24) {
            ctx->pc = 0x3B9A30u;
            goto label_3b9a30;
        }
    }
    ctx->pc = 0x3B9A2Cu;
    // 0x3b9a2c: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3b9a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
label_3b9a30:
    // 0x3b9a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9a38: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A38u;
        // 0x3b9a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9A40u;
}

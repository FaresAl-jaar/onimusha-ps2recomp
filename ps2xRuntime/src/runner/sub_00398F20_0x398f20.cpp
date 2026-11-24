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

// Function: sub_00398F20
// Address: 0x398f20 - 0x3991ac
void sub_00398F20_0x398f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398F20_0x398f20");
#endif

    switch (ctx->pc) {
        case 0x398f8cu: goto label_398f8c;
        case 0x398ff4u: goto label_398ff4;
        case 0x39901cu: goto label_39901c;
        case 0x399030u: goto label_399030;
        case 0x39906cu: goto label_39906c;
        case 0x39907cu: goto label_39907c;
        case 0x3990ecu: goto label_3990ec;
        case 0x399198u: goto label_399198;
        default: break;
    }

    ctx->pc = 0x398f20u;

    // 0x398f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x398f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x398f24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x398f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398f2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x398f30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398f34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x398f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398f38: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x398f38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x398f3c: 0x10a30048  beq         $a1, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x398F3Cu;
    {
        const bool branch_taken_0x398f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x398F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F3Cu;
        // 0x398f40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398f3c) {
            ctx->pc = 0x399060u;
            goto label_399060;
        }
    }
    ctx->pc = 0x398F44u;
    // 0x398f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x398f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398f48: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x398F48u;
    {
        const bool branch_taken_0x398f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x398f48) {
            ctx->pc = 0x399040u;
            goto label_399040;
        }
    }
    ctx->pc = 0x398F50u;
    // 0x398f50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x398F50u;
    {
        const bool branch_taken_0x398f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x398f50) {
            ctx->pc = 0x398F60u;
            goto label_398f60;
        }
    }
    ctx->pc = 0x398F58u;
    // 0x398f58: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x398F58u;
    {
        const bool branch_taken_0x398f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398f58) {
            ctx->pc = 0x399198u;
            goto label_399198;
        }
    }
    ctx->pc = 0x398F60u;
label_398f60:
    // 0x398f60: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x398F60u;
    {
        const bool branch_taken_0x398f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x398f60) {
            ctx->pc = 0x399028u;
            goto label_399028;
        }
    }
    ctx->pc = 0x398F68u;
    // 0x398f68: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x398f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x398f6c: 0x9223055a  lbu         $v1, 0x55A($s1)
    ctx->pc = 0x398f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1370)));
    // 0x398f70: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x398f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x398f74: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x398f74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x398f78: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x398f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x398f7c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x398f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x398f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x398f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x398f84: 0xc0aa2c4  jal         func_2A8B10
    ctx->pc = 0x398F84u;
    SET_GPR_U32(ctx, 31, 0x398F8Cu);
    ctx->pc = 0x398F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398F84u;
    // 0x398f88: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B10u, 0x398F84u, 0x398F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398F8Cu;
label_398f8c:
    // 0x398f8c: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x398f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x398f90: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x398f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x398f94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x398f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x398f98: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x398f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x398f9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x398f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x398fa0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x398fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x398fa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x398fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x398fa8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x398fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x398fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x398facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x398fb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x398fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x398fb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x398fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x398fb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x398fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x398fbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x398FBCu;
    {
        const bool branch_taken_0x398fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x398fbc) {
            ctx->pc = 0x398FD4u;
            goto label_398fd4;
        }
    }
    ctx->pc = 0x398FC4u;
    // 0x398fc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x398fc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x398fc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x398fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x398fcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x398FCCu;
    {
        const bool branch_taken_0x398fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398fcc) {
            ctx->pc = 0x398FECu;
            goto label_398fec;
        }
    }
    ctx->pc = 0x398FD4u;
label_398fd4:
    // 0x398fd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x398fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x398fd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x398fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x398fdc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x398fdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x398fe0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x398fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x398fe4: 0x0  nop
    ctx->pc = 0x398fe4u;
    // NOP
    // 0x398fe8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x398fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_398fec:
    // 0x398fec: 0xc0ad00c  jal         func_2B4030
    ctx->pc = 0x398FECu;
    SET_GPR_U32(ctx, 31, 0x398FF4u);
    ctx->pc = 0x2B4030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4030u, 0x398FECu, 0x398FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398FF4u;
label_398ff4:
    // 0x398ff4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x398ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x398ff8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x398ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x398ffc: 0x9223055a  lbu         $v1, 0x55A($s1)
    ctx->pc = 0x398ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1370)));
    // 0x399000: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x399000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x399004: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x399004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x399008: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x399008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39900c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x39900cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x399010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x399014: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x399014u;
    SET_GPR_U32(ctx, 31, 0x39901Cu);
    ctx->pc = 0x399018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399014u;
    // 0x399018: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x399014u, 0x39901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39901Cu;
label_39901c:
    // 0x39901c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39901Cu;
    {
        const bool branch_taken_0x39901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39901c) {
            ctx->pc = 0x399030u;
            goto label_399030;
        }
    }
    ctx->pc = 0x399024u;
    // 0x399024: 0x0  nop
    ctx->pc = 0x399024u;
    // NOP
label_399028:
    // 0x399028: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x399028u;
    SET_GPR_U32(ctx, 31, 0x399030u);
    ctx->pc = 0x39902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399028u;
    // 0x39902c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x399028u, 0x399030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399030u;
label_399030:
    // 0x399030: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x399030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x399034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x399034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x399038: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x399038u;
    {
        const bool branch_taken_0x399038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399038u;
        // 0x39903c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399038) {
            ctx->pc = 0x399198u;
            goto label_399198;
        }
    }
    ctx->pc = 0x399040u;
label_399040:
    // 0x399040: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x399040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x399044: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x399044u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x399048: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x399048u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39904c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x39904cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x399050: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x399050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x399054: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x399054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x399058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x399058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39905c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x39905cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_399060:
    // 0x399060: 0x8e250550  lw          $a1, 0x550($s1)
    ctx->pc = 0x399060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x399064: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x399064u;
    SET_GPR_U32(ctx, 31, 0x39906Cu);
    ctx->pc = 0x399068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399064u;
    // 0x399068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x399064u, 0x39906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39906Cu;
label_39906c:
    // 0x39906c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39906Cu;
    {
        const bool branch_taken_0x39906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39906Cu;
        // 0x399070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39906c) {
            ctx->pc = 0x399080u;
            goto label_399080;
        }
    }
    ctx->pc = 0x399074u;
    // 0x399074: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x399074u;
    SET_GPR_U32(ctx, 31, 0x39907Cu);
    ctx->pc = 0x399078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399074u;
    // 0x399078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x399074u, 0x39907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39907Cu;
label_39907c:
    // 0x39907c: 0x0  nop
    ctx->pc = 0x39907cu;
    // NOP
label_399080:
    // 0x399080: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x399080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x399084: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x399084u;
    {
        const bool branch_taken_0x399084 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x399088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399084u;
        // 0x399088: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x399084) {
            ctx->pc = 0x3990F0u;
            goto label_3990f0;
        }
    }
    ctx->pc = 0x39908Cu;
    // 0x39908c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x39908Cu;
    {
        const bool branch_taken_0x39908c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39908c) {
            ctx->pc = 0x3990F0u;
            goto label_3990f0;
        }
    }
    ctx->pc = 0x399094u;
    // 0x399094: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x399094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x399098: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x399098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x39909c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x39909cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3990a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3990a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3990a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3990a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3990a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3990a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3990ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3990acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3990b0: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x3990b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x3990b4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3990b4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3990b8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3990b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3990bc: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3990bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x3990c0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3990c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3990c4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3990c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3990c8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3990c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3990cc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3990ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3990d0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3990d0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3990d4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3990d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3990d8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3990d8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3990dc: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3990dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3990e0: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3990e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3990e4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3990E4u;
    SET_GPR_U32(ctx, 31, 0x3990ECu);
    ctx->pc = 0x3990E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3990E4u;
    // 0x3990e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3990E4u, 0x3990ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3990ECu;
label_3990ec:
    // 0x3990ec: 0x0  nop
    ctx->pc = 0x3990ecu;
    // NOP
label_3990f0:
    // 0x3990f0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3990f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3990f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3990F4u;
    {
        const bool branch_taken_0x3990f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990F4u;
        // 0x3990f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990f4) {
            ctx->pc = 0x399108u;
            goto label_399108;
        }
    }
    ctx->pc = 0x3990FCu;
    // 0x3990fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3990FCu;
    {
        const bool branch_taken_0x3990fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3990fc) {
            ctx->pc = 0x399188u;
            goto label_399188;
        }
    }
    ctx->pc = 0x399104u;
    // 0x399104: 0x0  nop
    ctx->pc = 0x399104u;
    // NOP
label_399108:
    // 0x399108: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x399108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x39910c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x399110: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x399110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x399114: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x399114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x399118: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x399118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x39911c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39911Cu;
    {
        const bool branch_taken_0x39911c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39911c) {
            ctx->pc = 0x399158u;
            goto label_399158;
        }
    }
    ctx->pc = 0x399124u;
    // 0x399124: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x399124u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x399128: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x399128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39912c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39912Cu;
    {
        const bool branch_taken_0x39912c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39912Cu;
        // 0x399130: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39912c) {
            ctx->pc = 0x399180u;
            goto label_399180;
        }
    }
    ctx->pc = 0x399134u;
    // 0x399134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399138: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x399138u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39913c: 0x0  nop
    ctx->pc = 0x39913cu;
    // NOP
    // 0x399140: 0x0  nop
    ctx->pc = 0x399140u;
    // NOP
    // 0x399144: 0x2010  mfhi        $a0
    ctx->pc = 0x399144u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x399148: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x399148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39914c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39914Cu;
    {
        const bool branch_taken_0x39914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39914Cu;
        // 0x399150: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39914c) {
            ctx->pc = 0x399180u;
            goto label_399180;
        }
    }
    ctx->pc = 0x399154u;
    // 0x399154: 0x0  nop
    ctx->pc = 0x399154u;
    // NOP
label_399158:
    // 0x399158: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x399158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x39915c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39915cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x399160: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x399160u;
    {
        const bool branch_taken_0x399160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x399160) {
            ctx->pc = 0x399180u;
            goto label_399180;
        }
    }
    ctx->pc = 0x399168u;
    // 0x399168: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x399168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39916c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399170: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x399170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x399174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x399174u;
    {
        const bool branch_taken_0x399174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399174u;
        // 0x399178: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399174) {
            ctx->pc = 0x399188u;
            goto label_399188;
        }
    }
    ctx->pc = 0x39917Cu;
    // 0x39917c: 0x0  nop
    ctx->pc = 0x39917cu;
    // NOP
label_399180:
    // 0x399180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399184: 0x0  nop
    ctx->pc = 0x399184u;
    // NOP
label_399188:
    // 0x399188: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x399188u;
    {
        const bool branch_taken_0x399188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399188u;
        // 0x39918c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399188) {
            ctx->pc = 0x399198u;
            goto label_399198;
        }
    }
    ctx->pc = 0x399190u;
    // 0x399190: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x399190u;
    SET_GPR_U32(ctx, 31, 0x399198u);
    ctx->pc = 0x399194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399190u;
    // 0x399194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x399190u, 0x399198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399198u;
label_399198:
    // 0x399198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39919c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39919cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3991a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3991a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3991a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3991A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3991A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991A4u;
        // 0x3991a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3991A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3991ACu;
}

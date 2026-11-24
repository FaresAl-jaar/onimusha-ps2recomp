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

// Function: sub_002D0080
// Address: 0x2d0080 - 0x2d0218
void sub_002D0080_0x2d0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0080_0x2d0080");
#endif

    switch (ctx->pc) {
        case 0x2d0080u: goto label_2d0080;
        case 0x2d0084u: goto label_2d0084;
        case 0x2d0088u: goto label_2d0088;
        case 0x2d008cu: goto label_2d008c;
        case 0x2d0090u: goto label_2d0090;
        case 0x2d0094u: goto label_2d0094;
        case 0x2d0098u: goto label_2d0098;
        case 0x2d009cu: goto label_2d009c;
        case 0x2d00a0u: goto label_2d00a0;
        case 0x2d00a4u: goto label_2d00a4;
        case 0x2d00a8u: goto label_2d00a8;
        case 0x2d00acu: goto label_2d00ac;
        case 0x2d00b0u: goto label_2d00b0;
        case 0x2d00b4u: goto label_2d00b4;
        case 0x2d00b8u: goto label_2d00b8;
        case 0x2d00bcu: goto label_2d00bc;
        case 0x2d00c0u: goto label_2d00c0;
        case 0x2d00c4u: goto label_2d00c4;
        case 0x2d00c8u: goto label_2d00c8;
        case 0x2d00ccu: goto label_2d00cc;
        case 0x2d00d0u: goto label_2d00d0;
        case 0x2d00d4u: goto label_2d00d4;
        case 0x2d00d8u: goto label_2d00d8;
        case 0x2d00dcu: goto label_2d00dc;
        case 0x2d00e0u: goto label_2d00e0;
        case 0x2d00e4u: goto label_2d00e4;
        case 0x2d00e8u: goto label_2d00e8;
        case 0x2d00ecu: goto label_2d00ec;
        case 0x2d00f0u: goto label_2d00f0;
        case 0x2d00f4u: goto label_2d00f4;
        case 0x2d00f8u: goto label_2d00f8;
        case 0x2d00fcu: goto label_2d00fc;
        case 0x2d0100u: goto label_2d0100;
        case 0x2d0104u: goto label_2d0104;
        case 0x2d0108u: goto label_2d0108;
        case 0x2d010cu: goto label_2d010c;
        case 0x2d0110u: goto label_2d0110;
        case 0x2d0114u: goto label_2d0114;
        case 0x2d0118u: goto label_2d0118;
        case 0x2d011cu: goto label_2d011c;
        case 0x2d0120u: goto label_2d0120;
        case 0x2d0124u: goto label_2d0124;
        case 0x2d0128u: goto label_2d0128;
        case 0x2d012cu: goto label_2d012c;
        case 0x2d0130u: goto label_2d0130;
        case 0x2d0134u: goto label_2d0134;
        case 0x2d0138u: goto label_2d0138;
        case 0x2d013cu: goto label_2d013c;
        case 0x2d0140u: goto label_2d0140;
        case 0x2d0144u: goto label_2d0144;
        case 0x2d0148u: goto label_2d0148;
        case 0x2d014cu: goto label_2d014c;
        case 0x2d0150u: goto label_2d0150;
        case 0x2d0154u: goto label_2d0154;
        case 0x2d0158u: goto label_2d0158;
        case 0x2d015cu: goto label_2d015c;
        case 0x2d0160u: goto label_2d0160;
        case 0x2d0164u: goto label_2d0164;
        case 0x2d0168u: goto label_2d0168;
        case 0x2d016cu: goto label_2d016c;
        case 0x2d0170u: goto label_2d0170;
        case 0x2d0174u: goto label_2d0174;
        case 0x2d0178u: goto label_2d0178;
        case 0x2d017cu: goto label_2d017c;
        case 0x2d0180u: goto label_2d0180;
        case 0x2d0184u: goto label_2d0184;
        case 0x2d0188u: goto label_2d0188;
        case 0x2d018cu: goto label_2d018c;
        case 0x2d0190u: goto label_2d0190;
        case 0x2d0194u: goto label_2d0194;
        case 0x2d0198u: goto label_2d0198;
        case 0x2d019cu: goto label_2d019c;
        case 0x2d01a0u: goto label_2d01a0;
        case 0x2d01a4u: goto label_2d01a4;
        case 0x2d01a8u: goto label_2d01a8;
        case 0x2d01acu: goto label_2d01ac;
        case 0x2d01b0u: goto label_2d01b0;
        case 0x2d01b4u: goto label_2d01b4;
        case 0x2d01b8u: goto label_2d01b8;
        case 0x2d01bcu: goto label_2d01bc;
        case 0x2d01c0u: goto label_2d01c0;
        case 0x2d01c4u: goto label_2d01c4;
        case 0x2d01c8u: goto label_2d01c8;
        case 0x2d01ccu: goto label_2d01cc;
        case 0x2d01d0u: goto label_2d01d0;
        case 0x2d01d4u: goto label_2d01d4;
        case 0x2d01d8u: goto label_2d01d8;
        case 0x2d01dcu: goto label_2d01dc;
        case 0x2d01e0u: goto label_2d01e0;
        case 0x2d01e4u: goto label_2d01e4;
        case 0x2d01e8u: goto label_2d01e8;
        case 0x2d01ecu: goto label_2d01ec;
        case 0x2d01f0u: goto label_2d01f0;
        case 0x2d01f4u: goto label_2d01f4;
        case 0x2d01f8u: goto label_2d01f8;
        case 0x2d01fcu: goto label_2d01fc;
        case 0x2d0200u: goto label_2d0200;
        case 0x2d0204u: goto label_2d0204;
        case 0x2d0208u: goto label_2d0208;
        case 0x2d020cu: goto label_2d020c;
        case 0x2d0210u: goto label_2d0210;
        case 0x2d0214u: goto label_2d0214;
        default: break;
    }

    ctx->pc = 0x2d0080u;

label_2d0080:
    // 0x2d0080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d0084:
    // 0x2d0084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d0084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d0088:
    // 0x2d0088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d008c:
    // 0x2d008c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d0090:
    // 0x2d0090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0094:
    // 0x2d0094: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2d0094u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2d0098:
    // 0x2d0098: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
label_2d009c:
    if (ctx->pc == 0x2D009Cu) {
        ctx->pc = 0x2D009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0098u;
        // 0x2d009c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D00A0u;
        goto label_2d00a0;
    }
    ctx->pc = 0x2D0098u;
    {
        const bool branch_taken_0x2d0098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0098u;
        // 0x2d009c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0098) {
            ctx->pc = 0x2D0208u;
            goto label_2d0208;
        }
    }
    ctx->pc = 0x2D00A0u;
label_2d00a0:
    // 0x2d00a0: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_2d00a4:
    if (ctx->pc == 0x2D00A4u) {
        ctx->pc = 0x2D00A8u;
        goto label_2d00a8;
    }
    ctx->pc = 0x2D00A0u;
    {
        const bool branch_taken_0x2d00a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d00a0) {
            ctx->pc = 0x2D0150u;
            goto label_2d0150;
        }
    }
    ctx->pc = 0x2D00A8u;
label_2d00a8:
    // 0x2d00a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2d00ac:
    if (ctx->pc == 0x2D00ACu) {
        ctx->pc = 0x2D00B0u;
        goto label_2d00b0;
    }
    ctx->pc = 0x2D00A8u;
    {
        const bool branch_taken_0x2d00a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d00a8) {
            ctx->pc = 0x2D00B8u;
            goto label_2d00b8;
        }
    }
    ctx->pc = 0x2D00B0u;
label_2d00b0:
    // 0x2d00b0: 0x10000055  b           . + 4 + (0x55 << 2)
label_2d00b4:
    if (ctx->pc == 0x2D00B4u) {
        ctx->pc = 0x2D00B8u;
        goto label_2d00b8;
    }
    ctx->pc = 0x2D00B0u;
    {
        const bool branch_taken_0x2d00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d00b0) {
            ctx->pc = 0x2D0208u;
            goto label_2d0208;
        }
    }
    ctx->pc = 0x2D00B8u;
label_2d00b8:
    // 0x2d00b8: 0x7a0307a0  lq          $v1, 0x7A0($s0)
    ctx->pc = 0x2d00b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 1952)));
label_2d00bc:
    // 0x2d00bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2d00c0:
    // 0x2d00c0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2d00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2d00c4:
    // 0x2d00c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d00c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d00c8:
    // 0x2d00c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d00c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d00cc:
    // 0x2d00cc: 0xc0414dc  jal         func_105370
label_2d00d0:
    if (ctx->pc == 0x2D00D0u) {
        ctx->pc = 0x2D00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00CCu;
        // 0x2d00d0: 0x7e030090  sq          $v1, 0x90($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D00D4u;
        goto label_2d00d4;
    }
    ctx->pc = 0x2D00CCu;
    SET_GPR_U32(ctx, 31, 0x2D00D4u);
    ctx->pc = 0x2D00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00CCu;
    // 0x2d00d0: 0x7e030090  sq          $v1, 0x90($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D00CCu, 0x2D00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00D4u;
label_2d00d4:
    // 0x2d00d4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2d00d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2d00d8:
    // 0x2d00d8: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x2d00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_2d00dc:
    // 0x2d00dc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2d00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2d00e0:
    // 0x2d00e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2d00e4:
    // 0x2d00e4: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2d00e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
label_2d00e8:
    // 0x2d00e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d00ec:
    // 0x2d00ec: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x2d00ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_2d00f0:
    // 0x2d00f0: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2d00f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2d00f4:
    // 0x2d00f4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2d00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_2d00f8:
    // 0x2d00f8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2d00f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2d00fc:
    // 0x2d00fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2d0100:
    // 0x2d0100: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2d0100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d0104:
    // 0x2d0104: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d0104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2d0108:
    // 0x2d0108: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d0108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2d010c:
    // 0x2d010c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d010cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d0110:
    // 0x2d0110: 0x0  nop
    ctx->pc = 0x2d0110u;
    // NOP
label_2d0114:
    // 0x2d0114: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d0114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2d0118:
    // 0x2d0118: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d0118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d011c:
    // 0x2d011c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2d0120:
    if (ctx->pc == 0x2D0120u) {
        ctx->pc = 0x2D0124u;
        goto label_2d0124;
    }
    ctx->pc = 0x2D011Cu;
    {
        const bool branch_taken_0x2d011c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d011c) {
            ctx->pc = 0x2D0134u;
            goto label_2d0134;
        }
    }
    ctx->pc = 0x2D0124u;
label_2d0124:
    // 0x2d0124: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2d0128:
    // 0x2d0128: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d0128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d012c:
    // 0x2d012c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2d0130:
    if (ctx->pc == 0x2D0130u) {
        ctx->pc = 0x2D0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D012Cu;
        // 0x2d0130: 0xa6020828  sh          $v0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0134u;
        goto label_2d0134;
    }
    ctx->pc = 0x2D012Cu;
    {
        const bool branch_taken_0x2d012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D012Cu;
        // 0x2d0130: 0xa6020828  sh          $v0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d012c) {
            ctx->pc = 0x2D014Cu;
            goto label_2d014c;
        }
    }
    ctx->pc = 0x2D0134u;
label_2d0134:
    // 0x2d0134: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d0134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2d0138:
    // 0x2d0138: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d0138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2d013c:
    // 0x2d013c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d013cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2d0140:
    // 0x2d0140: 0x0  nop
    ctx->pc = 0x2d0140u;
    // NOP
label_2d0144:
    // 0x2d0144: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d0144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2d0148:
    // 0x2d0148: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x2d0148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
label_2d014c:
    // 0x2d014c: 0x0  nop
    ctx->pc = 0x2d014cu;
    // NOP
label_2d0150:
    // 0x2d0150: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2d0150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_2d0154:
    // 0x2d0154: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2d0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_2d0158:
    // 0x2d0158: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2d0158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2d015c:
    // 0x2d015c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d015cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d0160:
    // 0x2d0160: 0xc0414dc  jal         func_105370
label_2d0164:
    if (ctx->pc == 0x2D0164u) {
        ctx->pc = 0x2D0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0160u;
        // 0x2d0164: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0168u;
        goto label_2d0168;
    }
    ctx->pc = 0x2D0160u;
    SET_GPR_U32(ctx, 31, 0x2D0168u);
    ctx->pc = 0x2D0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0160u;
    // 0x2d0164: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D0160u, 0x2D0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0168u;
label_2d0168:
    // 0x2d0168: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2d0168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2d016c:
    // 0x2d016c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2d016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2d0170:
    // 0x2d0170: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2d0170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2d0174:
    // 0x2d0174: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2d0174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2d0178:
    // 0x2d0178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d0178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d017c:
    // 0x2d017c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2d017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2d0180:
    // 0x2d0180: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x2d0180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
label_2d0184:
    // 0x2d0184: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d0184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0188:
    // 0x2d0188: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2d0188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2d018c:
    // 0x2d018c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d018cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d0190:
    // 0x2d0190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d0194:
    // 0x2d0194: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d0198:
    // 0x2d0198: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d0198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d019c:
    // 0x2d019c: 0xc096928  jal         func_25A4A0
label_2d01a0:
    if (ctx->pc == 0x2D01A0u) {
        ctx->pc = 0x2D01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D019Cu;
        // 0x2d01a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01A4u;
        goto label_2d01a4;
    }
    ctx->pc = 0x2D019Cu;
    SET_GPR_U32(ctx, 31, 0x2D01A4u);
    ctx->pc = 0x2D01A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D019Cu;
    // 0x2d01a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4A0u, 0x2D019Cu, 0x2D01A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01A4u;
label_2d01a4:
    // 0x2d01a4: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x2d01a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d01a8:
    // 0x2d01a8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2d01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2d01ac:
    // 0x2d01ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d01acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d01b0:
    // 0x2d01b0: 0x0  nop
    ctx->pc = 0x2d01b0u;
    // NOP
label_2d01b4:
    // 0x2d01b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d01b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d01b8:
    // 0x2d01b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2d01bc:
    if (ctx->pc == 0x2D01BCu) {
        ctx->pc = 0x2D01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01B8u;
        // 0x2d01bc: 0x3c03bc23  lui         $v1, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01C0u;
        goto label_2d01c0;
    }
    ctx->pc = 0x2D01B8u;
    {
        const bool branch_taken_0x2d01b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01B8u;
        // 0x2d01bc: 0x3c03bc23  lui         $v1, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01b8) {
            ctx->pc = 0x2D01C8u;
            goto label_2d01c8;
        }
    }
    ctx->pc = 0x2D01C0u;
label_2d01c0:
    // 0x2d01c0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2d01c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2d01c4:
    // 0x2d01c4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x2d01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_2d01c8:
    // 0x2d01c8: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x2d01c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_2d01cc:
    // 0x2d01cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2d01d0:
    if (ctx->pc == 0x2D01D0u) {
        ctx->pc = 0x2D01D4u;
        goto label_2d01d4;
    }
    ctx->pc = 0x2D01CCu;
    {
        const bool branch_taken_0x2d01cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d01cc) {
            ctx->pc = 0x2D01E0u;
            goto label_2d01e0;
        }
    }
    ctx->pc = 0x2D01D4u;
label_2d01d4:
    // 0x2d01d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d01d8:
    // 0x2d01d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2d01dc:
    if (ctx->pc == 0x2D01DCu) {
        ctx->pc = 0x2D01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01D8u;
        // 0x2d01dc: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01E0u;
        goto label_2d01e0;
    }
    ctx->pc = 0x2D01D8u;
    {
        const bool branch_taken_0x2d01d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01D8u;
        // 0x2d01dc: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01d8) {
            ctx->pc = 0x2D0208u;
            goto label_2d0208;
        }
    }
    ctx->pc = 0x2D01E0u;
label_2d01e0:
    // 0x2d01e0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2d01e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2d01e4:
    // 0x2d01e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d01e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d01e8:
    // 0x2d01e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d01e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d01ec:
    // 0x2d01ec: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2d01ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2d01f0:
    // 0x2d01f0: 0x320f809  jalr        $t9
label_2d01f4:
    if (ctx->pc == 0x2D01F4u) {
        ctx->pc = 0x2D01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01F0u;
        // 0x2d01f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D01F8u;
        goto label_2d01f8;
    }
    ctx->pc = 0x2D01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D01F8u);
        ctx->pc = 0x2D01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01F0u;
        // 0x2d01f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D01F0u, 0x2D01F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D01F8u;
label_2d01f8:
    // 0x2d01f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d01fc:
    // 0x2d01fc: 0xa6030786  sh          $v1, 0x786($s0)
    ctx->pc = 0x2d01fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
label_2d0200:
    // 0x2d0200: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2d0200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2d0204:
    // 0x2d0204: 0x0  nop
    ctx->pc = 0x2d0204u;
    // NOP
label_2d0208:
    // 0x2d0208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d020c:
    // 0x2d020c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d020cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0210:
    // 0x2d0210: 0x3e00008  jr          $ra
label_2d0214:
    if (ctx->pc == 0x2D0214u) {
        ctx->pc = 0x2D0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0210u;
        // 0x2d0214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0218u;
        goto label_fallthrough_0x2d0210;
    }
    ctx->pc = 0x2D0210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0210u;
        // 0x2d0214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d0210:
    ctx->pc = 0x2D0218u;
}

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

// Function: sub_00190560
// Address: 0x190560 - 0x1907d8
void sub_00190560_0x190560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190560_0x190560");
#endif

    switch (ctx->pc) {
        case 0x190680u: goto label_190680;
        case 0x1906f8u: goto label_1906f8;
        case 0x190750u: goto label_190750;
        case 0x190768u: goto label_190768;
        default: break;
    }

    ctx->pc = 0x190560u;

    // 0x190560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190564: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x190564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x190568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19056c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x19056cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x190570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190574: 0x24c65710  addiu       $a2, $a2, 0x5710
    ctx->pc = 0x190574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22288));
    // 0x190578: 0x93878718  lbu         $a3, -0x78E8($gp)
    ctx->pc = 0x190578u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x19057c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19057cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190580: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x190580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x190584: 0x24a55714  addiu       $a1, $a1, 0x5714
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22292));
    // 0x190588: 0x24845718  addiu       $a0, $a0, 0x5718
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22296));
    // 0x19058c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x19058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190590: 0x9788873c  lhu         $t0, -0x78C4($gp)
    ctx->pc = 0x190590u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x190594: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x190594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x190598: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x190598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19059c: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x19059cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1905a0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1905a4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1905a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1905a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1905a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1905acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1905b0: 0x31030002  andi        $v1, $t0, 0x2
    ctx->pc = 0x1905b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1905b4: 0xe7808708  swc1        $f0, -0x78F8($gp)
    ctx->pc = 0x1905b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), bits); }
    // 0x1905b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1905b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905bc: 0xe42030c0  swc1        $f0, 0x30C0($at)
    ctx->pc = 0x1905bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12480), bits); }
    // 0x1905c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1905c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905c4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1905c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1905c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1905C8u;
    {
        const bool branch_taken_0x1905c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905C8u;
        // 0x1905cc: 0xe42030a4  swc1        $f0, 0x30A4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905c8) {
            ctx->pc = 0x1905D8u;
            goto label_1905d8;
        }
    }
    ctx->pc = 0x1905D0u;
    // 0x1905d0: 0xc7808748  lwc1        $f0, -0x78B8($gp)
    ctx->pc = 0x1905d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905d4: 0xe7808708  swc1        $f0, -0x78F8($gp)
    ctx->pc = 0x1905d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), bits); }
label_1905d8:
    // 0x1905d8: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x1905d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1905dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1905DCu;
    {
        const bool branch_taken_0x1905dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905dc) {
            ctx->pc = 0x190610u;
            goto label_190610;
        }
    }
    ctx->pc = 0x1905E4u;
    // 0x1905e4: 0x93858744  lbu         $a1, -0x78BC($gp)
    ctx->pc = 0x1905e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x1905e8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1905e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x1905ec: 0x24635714  addiu       $v1, $v1, 0x5714
    ctx->pc = 0x1905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22292));
    // 0x1905f0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1905f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1905f4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1905f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1905f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1905fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x190600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x190600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190604: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x190604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190608: 0xe42030c0  swc1        $f0, 0x30C0($at)
    ctx->pc = 0x190608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12480), bits); }
    // 0x19060c: 0x0  nop
    ctx->pc = 0x19060cu;
    // NOP
label_190610:
    // 0x190610: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x190610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x190614: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190614u;
    {
        const bool branch_taken_0x190614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190614) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x19061Cu;
    // 0x19061c: 0xc780874c  lwc1        $f0, -0x78B4($gp)
    ctx->pc = 0x19061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190620: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190624: 0xe42030a4  swc1        $f0, 0x30A4($at)
    ctx->pc = 0x190624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8430A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430A4u, _value); } while (0); }
label_190628:
    // 0x190628: 0x31030010  andi        $v1, $t0, 0x10
    ctx->pc = 0x190628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x19062c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19062Cu;
    {
        const bool branch_taken_0x19062c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19062c) {
            ctx->pc = 0x190640u;
            goto label_190640;
        }
    }
    ctx->pc = 0x190634u;
    // 0x190634: 0xc7808750  lwc1        $f0, -0x78B0($gp)
    ctx->pc = 0x190634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190638: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x19063c: 0xe42030c0  swc1        $f0, 0x30C0($at)
    ctx->pc = 0x19063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8430C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C0u, _value); } while (0); }
label_190640:
    // 0x190640: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x190644: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x190648: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x190648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x19064c: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x19064Cu;
    {
        const bool branch_taken_0x19064c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19064c) {
            ctx->pc = 0x1907C8u;
            goto label_1907c8;
        }
    }
    ctx->pc = 0x190654u;
    // 0x190654: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x190654u;
    {
        const bool branch_taken_0x190654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x190654) {
            ctx->pc = 0x1907C8u;
            goto label_1907c8;
        }
    }
    ctx->pc = 0x19065Cu;
    // 0x19065c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x19065cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190660: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x190664: 0x24843080  addiu       $a0, $a0, 0x3080
    ctx->pc = 0x190664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12416));
    // 0x190668: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x190668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x19066c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x19066cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190670: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x190670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190674: 0x24c630a0  addiu       $a2, $a2, 0x30A0
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12448));
    // 0x190678: 0xc0414ca  jal         func_105328
    ctx->pc = 0x190678u;
    SET_GPR_U32(ctx, 31, 0x190680u);
    ctx->pc = 0x19067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190678u;
    // 0x19067c: 0x7c223080  sq          $v0, 0x3080($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 12416), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x190678u, 0x190680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190680u;
label_190680:
    // 0x190680: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x190680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x190684: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190688: 0xa7808704  sh          $zero, -0x78FC($gp)
    ctx->pc = 0x190688u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936324), (uint16_t)GPR_U32(ctx, 0));
    // 0x19068c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19068Cu;
    {
        const bool branch_taken_0x19068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19068Cu;
        // 0x190690: 0xa7808700  sh          $zero, -0x7900($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936320), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19068c) {
            ctx->pc = 0x190728u;
            goto label_190728;
        }
    }
    ctx->pc = 0x190694u;
    // 0x190694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190698: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190698u;
    {
        const bool branch_taken_0x190698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190698) {
            ctx->pc = 0x1906E0u;
            goto label_1906e0;
        }
    }
    ctx->pc = 0x1906A0u;
    // 0x1906a0: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1906a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1906a8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1906a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1906ac: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x1906b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1906b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1906b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1906b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1906b8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1906b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1906bc: 0x0  nop
    ctx->pc = 0x1906bcu;
    // NOP
    // 0x1906c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1906c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1906c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1906c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1906c8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1906c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1906cc: 0x0  nop
    ctx->pc = 0x1906ccu;
    // NOP
    // 0x1906d0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1906d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1906d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1906D4u;
    {
        const bool branch_taken_0x1906d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906D4u;
        // 0x1906d8: 0xe42030c4  swc1        $f0, 0x30C4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906d4) {
            ctx->pc = 0x190728u;
            goto label_190728;
        }
    }
    ctx->pc = 0x1906DCu;
    // 0x1906dc: 0x0  nop
    ctx->pc = 0x1906dcu;
    // NOP
label_1906e0:
    // 0x1906e0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1906e4: 0x84226cc2  lh          $v0, 0x6CC2($at)
    ctx->pc = 0x1906e4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x696CC2u));
    // 0x1906e8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1906ec: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1906ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1906f0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x1906F0u;
    SET_GPR_U32(ctx, 31, 0x1906F8u);
    ctx->pc = 0x1906F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906F0u;
    // 0x1906f4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x1906F0u, 0x1906F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906F8u;
label_1906f8:
    // 0x1906f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1906f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1906fc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190700: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x190700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x190704: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x190708: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x190708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x19070c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x190710: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190718: 0x0  nop
    ctx->pc = 0x190718u;
    // NOP
    // 0x19071c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19071cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x190720: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190720u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x190724: 0xe42030c4  swc1        $f0, 0x30C4($at)
    ctx->pc = 0x190724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8430C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C4u, _value); } while (0); }
label_190728:
    // 0x190728: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x19072c: 0x782230c0  lq          $v0, 0x30C0($at)
    ctx->pc = 0x19072cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x8430C0u));
    // 0x190730: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x190734: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x190734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x190738: 0x24843090  addiu       $a0, $a0, 0x3090
    ctx->pc = 0x190738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    // 0x19073c: 0xc78c86fc  lwc1        $f12, -0x7904($gp)
    ctx->pc = 0x19073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190740: 0x24a530b0  addiu       $a1, $a1, 0x30B0
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12464));
    // 0x190744: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190748: 0xc064060  jal         func_190180
    ctx->pc = 0x190748u;
    SET_GPR_U32(ctx, 31, 0x190750u);
    ctx->pc = 0x19074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190748u;
    // 0x19074c: 0x7c2230b0  sq          $v0, 0x30B0($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 12464), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190180u, 0x190748u, 0x190750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190750u;
label_190750:
    // 0x190750: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x190750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x190754: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x190758: 0x24843090  addiu       $a0, $a0, 0x3090
    ctx->pc = 0x190758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    // 0x19075c: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x190760: 0xc0414d0  jal         func_105340
    ctx->pc = 0x190760u;
    SET_GPR_U32(ctx, 31, 0x190768u);
    ctx->pc = 0x190764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190760u;
    // 0x190764: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x190760u, 0x190768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190768u;
label_190768:
    // 0x190768: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x19076c: 0x93838c8c  lbu         $v1, -0x7374($gp)
    ctx->pc = 0x19076cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937740)));
    // 0x190770: 0x78243090  lq          $a0, 0x3090($at)
    ctx->pc = 0x190770u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x843090u));
    // 0x190774: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190778: 0x7c2430d0  sq          $a0, 0x30D0($at)
    ctx->pc = 0x190778u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x8430D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x8430D0u, _value); } while (0);
    // 0x19077c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x19077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190780: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x190780u;
    {
        const bool branch_taken_0x190780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190780u;
        // 0x190784: 0x7c2430e0  sq          $a0, 0x30E0($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 12512), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190780) {
            ctx->pc = 0x1907C0u;
            goto label_1907c0;
        }
    }
    ctx->pc = 0x190788u;
    // 0x190788: 0x8f848c7c  lw          $a0, -0x7384($gp)
    ctx->pc = 0x190788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x19078c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190790: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x190790u;
    {
        const bool branch_taken_0x190790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x190794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190790u;
        // 0x190794: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190790) {
            ctx->pc = 0x1907C0u;
            goto label_1907c0;
        }
    }
    ctx->pc = 0x190798u;
    // 0x190798: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x190798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x19079c: 0x78243040  lq          $a0, 0x3040($at)
    ctx->pc = 0x19079cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 12352)));
    // 0x1907a0: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x1907a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    // 0x1907a4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1907a8: 0x78233050  lq          $v1, 0x3050($at)
    ctx->pc = 0x1907a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x843050u));
    // 0x1907ac: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1907acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1907b0: 0x7c2430d0  sq          $a0, 0x30D0($at)
    ctx->pc = 0x1907b0u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x8430D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x8430D0u, _value); } while (0);
    // 0x1907b4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1907b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1907B8u;
    {
        const bool branch_taken_0x1907b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1907BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907B8u;
        // 0x1907bc: 0x7c233080  sq          $v1, 0x3080($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 12416), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907b8) {
            ctx->pc = 0x1907C8u;
            goto label_1907c8;
        }
    }
    ctx->pc = 0x1907C0u;
label_1907c0:
    // 0x1907c0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x1907c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x1907c4: 0x0  nop
    ctx->pc = 0x1907c4u;
    // NOP
label_1907c8:
    // 0x1907c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1907c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1907cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1907ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1907d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1907D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1907D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907D0u;
        // 0x1907d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1907D8u;
}

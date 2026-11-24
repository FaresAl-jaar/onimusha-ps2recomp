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

// Function: sub_0031D4F0
// Address: 0x31d4f0 - 0x31d69c
void sub_0031D4F0_0x31d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D4F0_0x31d4f0");
#endif

    switch (ctx->pc) {
        case 0x31d530u: goto label_31d530;
        case 0x31d590u: goto label_31d590;
        default: break;
    }

    ctx->pc = 0x31d4f0u;

    // 0x31d4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31d4f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31d4f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d4fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d500: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31d500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d508: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31d508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d510: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x31d510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31d514: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x31D514u;
    {
        const bool branch_taken_0x31d514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D514u;
        // 0x31d518: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d514) {
            ctx->pc = 0x31D668u;
            goto label_31d668;
        }
    }
    ctx->pc = 0x31D51Cu;
    // 0x31d51c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x31D51Cu;
    {
        const bool branch_taken_0x31d51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D51Cu;
        // 0x31d520: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d51c) {
            ctx->pc = 0x31D558u;
            goto label_31d558;
        }
    }
    ctx->pc = 0x31D524u;
    // 0x31d524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31d524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31d528: 0xc0c75a8  jal         func_31D6A0
    ctx->pc = 0x31D528u;
    SET_GPR_U32(ctx, 31, 0x31D530u);
    ctx->pc = 0x31D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6A0u, 0x31D528u, 0x31D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D530u;
label_31d530:
    // 0x31d530: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31D530u;
    {
        const bool branch_taken_0x31d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d530) {
            ctx->pc = 0x31D558u;
            goto label_31d558;
        }
    }
    ctx->pc = 0x31D538u;
    // 0x31d538: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D538u;
    {
        const bool branch_taken_0x31d538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d538) {
            ctx->pc = 0x31D548u;
            goto label_31d548;
        }
    }
    ctx->pc = 0x31D540u;
    // 0x31d540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D540u;
    {
        const bool branch_taken_0x31d540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D540u;
        // 0x31d544: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d540) {
            ctx->pc = 0x31D550u;
            goto label_31d550;
        }
    }
    ctx->pc = 0x31D548u;
label_31d548:
    // 0x31d548: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31d548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d54c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31d54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d550:
    // 0x31d550: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x31D550u;
    {
        const bool branch_taken_0x31d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d550) {
            ctx->pc = 0x31D680u;
            goto label_31d680;
        }
    }
    ctx->pc = 0x31D558u;
label_31d558:
    // 0x31d558: 0x96660010  lhu         $a2, 0x10($s3)
    ctx->pc = 0x31d558u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x31d55c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x31d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x31d560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d564: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x31d564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31d568: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x31d568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31d56c: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x31D56Cu;
    {
        const bool branch_taken_0x31d56c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D56Cu;
        // 0x31d570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d56c) {
            ctx->pc = 0x31D638u;
            goto label_31d638;
        }
    }
    ctx->pc = 0x31D574u;
    // 0x31d574: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x31d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d578: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d57c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31d57cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31d580: 0x0  nop
    ctx->pc = 0x31d580u;
    // NOP
    // 0x31d584: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31d584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31d588: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31d588u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31d58c: 0x0  nop
    ctx->pc = 0x31d58cu;
    // NOP
label_31d590:
    // 0x31d590: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x31d590u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31d594: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x31d594u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31d598: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x31d598u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31d59c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x31d59cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x31d5a0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31d5a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31d5a4: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x31d5a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x31d5a8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x31D5A8u;
    {
        const bool branch_taken_0x31d5a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d5a8) {
            ctx->pc = 0x31D628u;
            goto label_31d628;
        }
    }
    ctx->pc = 0x31D5B0u;
    // 0x31d5b0: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x31d5b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31d5b4: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x31d5b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31d5b8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x31D5B8u;
    {
        const bool branch_taken_0x31d5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d5b8) {
            ctx->pc = 0x31D628u;
            goto label_31d628;
        }
    }
    ctx->pc = 0x31D5C0u;
    // 0x31d5c0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x31d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d5c4: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x31d5c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31d5c8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x31d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d5cc: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x31d5ccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31d5d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d5d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31d5d4: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x31d5d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31d5d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d5d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d5dc: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x31d5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x31d5e0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x31d5e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x31d5e4: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x31d5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x31d5e8: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x31d5e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31d5ec: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x31d5ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x31d5f0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31d5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31d5f4: 0x70e73818  mult1       $a3, $a3, $a3
    ctx->pc = 0x31d5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x31d5f8: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x31d5f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x31d5fc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x31d5fcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x31d600: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x31d600u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x31d604: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x31d604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x31d608: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31d608u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31d60c: 0x1084018  mult        $t0, $t0, $t0
    ctx->pc = 0x31d60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x31d610: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x31d610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31d614: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x31d614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31d618: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D618u;
    {
        const bool branch_taken_0x31d618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d618) {
            ctx->pc = 0x31D628u;
            goto label_31d628;
        }
    }
    ctx->pc = 0x31D620u;
    // 0x31d620: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x31d620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d624: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31d624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d628:
    // 0x31d628: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31d628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31d62c: 0x86382a  slt         $a3, $a0, $a2
    ctx->pc = 0x31d62cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31d630: 0x14e0ffd7  bnez        $a3, . + 4 + (-0x29 << 2)
    ctx->pc = 0x31D630u;
    {
        const bool branch_taken_0x31d630 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D630u;
        // 0x31d634: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d630) {
            ctx->pc = 0x31D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d590;
        }
    }
    ctx->pc = 0x31D638u;
label_31d638:
    // 0x31d638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D638u;
    {
        const bool branch_taken_0x31d638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d638) {
            ctx->pc = 0x31D648u;
            goto label_31d648;
        }
    }
    ctx->pc = 0x31D640u;
    // 0x31d640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D640u;
    {
        const bool branch_taken_0x31d640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d640) {
            ctx->pc = 0x31D64Cu;
            goto label_31d64c;
        }
    }
    ctx->pc = 0x31D648u;
label_31d648:
    // 0x31d648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31d648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d64c:
    // 0x31d64c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D64Cu;
    {
        const bool branch_taken_0x31d64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d64c) {
            ctx->pc = 0x31D65Cu;
            goto label_31d65c;
        }
    }
    ctx->pc = 0x31D654u;
    // 0x31d654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D654u;
    {
        const bool branch_taken_0x31d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d654) {
            ctx->pc = 0x31D660u;
            goto label_31d660;
        }
    }
    ctx->pc = 0x31D65Cu;
label_31d65c:
    // 0x31d65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d660:
    // 0x31d660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31D660u;
    {
        const bool branch_taken_0x31d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d660) {
            ctx->pc = 0x31D680u;
            goto label_31d680;
        }
    }
    ctx->pc = 0x31D668u;
label_31d668:
    // 0x31d668: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D668u;
    {
        const bool branch_taken_0x31d668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d668) {
            ctx->pc = 0x31D678u;
            goto label_31d678;
        }
    }
    ctx->pc = 0x31D670u;
    // 0x31d670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D670u;
    {
        const bool branch_taken_0x31d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D670u;
        // 0x31d674: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d670) {
            ctx->pc = 0x31D680u;
            goto label_31d680;
        }
    }
    ctx->pc = 0x31D678u;
label_31d678:
    // 0x31d678: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31d678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d67c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31d67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d680:
    // 0x31d680: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31d680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d694: 0x3e00008  jr          $ra
    ctx->pc = 0x31D694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D694u;
        // 0x31d698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D69Cu;
}

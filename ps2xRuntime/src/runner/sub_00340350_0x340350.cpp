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

// Function: sub_00340350
// Address: 0x340350 - 0x340684
void sub_00340350_0x340350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340350_0x340350");
#endif

    switch (ctx->pc) {
        case 0x34049cu: goto label_34049c;
        case 0x3404b0u: goto label_3404b0;
        case 0x3404d4u: goto label_3404d4;
        case 0x3404e4u: goto label_3404e4;
        case 0x3404f0u: goto label_3404f0;
        case 0x340548u: goto label_340548;
        case 0x3405e8u: goto label_3405e8;
        case 0x340660u: goto label_340660;
        default: break;
    }

    ctx->pc = 0x340350u;

    // 0x340350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x340350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x340354: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x340354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340358: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x340358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34035c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x340360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x340360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x340364: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x340364u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x340368: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x340368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34036c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34036cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x340370: 0x8c8506ac  lw          $a1, 0x6AC($a0)
    ctx->pc = 0x340370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x340374: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x340374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x340378: 0xac8506ac  sw          $a1, 0x6AC($a0)
    ctx->pc = 0x340378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 5));
    // 0x34037c: 0x8c8506b4  lw          $a1, 0x6B4($a0)
    ctx->pc = 0x34037cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x340380: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x340380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x340384: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x340384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
    // 0x340388: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x340388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x34038c: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x34038cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x340390: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x340390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x340394: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x340394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x340398: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x340398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x34039c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34039cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x3403a0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x3403a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3403a4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x3403a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x3403a8: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x3403a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x3403ac: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x3403acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3403b0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x3403b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x3403b4: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x3403b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x3403b8: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x3403b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3403bc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x3403bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x3403c0: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x3403c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x3403c4: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x3403c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3403c8: 0x34a50800  ori         $a1, $a1, 0x800
    ctx->pc = 0x3403c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x3403cc: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x3403ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x3403d0: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3403d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3403d4: 0x10a30082  beq         $a1, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3403D4u;
    {
        const bool branch_taken_0x3403d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3403D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403D4u;
        // 0x3403d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403d4) {
            ctx->pc = 0x3405E0u;
            goto label_3405e0;
        }
    }
    ctx->pc = 0x3403DCu;
    // 0x3403dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3403dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3403e0: 0x10a3006b  beq         $a1, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x3403E0u;
    {
        const bool branch_taken_0x3403e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3403E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403E0u;
        // 0x3403e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403e0) {
            ctx->pc = 0x340590u;
            goto label_340590;
        }
    }
    ctx->pc = 0x3403E8u;
    // 0x3403e8: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3403E8u;
    {
        const bool branch_taken_0x3403e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3403ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3403E8u;
        // 0x3403ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403e8) {
            ctx->pc = 0x340490u;
            goto label_340490;
        }
    }
    ctx->pc = 0x3403F0u;
    // 0x3403f0: 0x10a70015  beq         $a1, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3403F0u;
    {
        const bool branch_taken_0x3403f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3403f0) {
            ctx->pc = 0x340448u;
            goto label_340448;
        }
    }
    ctx->pc = 0x3403F8u;
    // 0x3403f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3403F8u;
    {
        const bool branch_taken_0x3403f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3403f8) {
            ctx->pc = 0x340408u;
            goto label_340408;
        }
    }
    ctx->pc = 0x340400u;
    // 0x340400: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x340400u;
    {
        const bool branch_taken_0x340400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340400) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x340408u;
label_340408:
    // 0x340408: 0x862608a0  lh          $a2, 0x8A0($s1)
    ctx->pc = 0x340408u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x34040c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34040cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x340410: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x340410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x340414: 0x2463f338  addiu       $v1, $v1, -0xCC8
    ctx->pc = 0x340414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964024));
    // 0x340418: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x340418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34041c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x34041cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x340420: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x340420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340424: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x340424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x340428: 0xa62600c2  sh          $a2, 0xC2($s1)
    ctx->pc = 0x340428u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 6));
    // 0x34042c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x34042cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x340430: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x340430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x340434: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x340434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x340438: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x340438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x34043c: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x34043cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x340440: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x340440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x340444: 0xa2270821  sb          $a3, 0x821($s1)
    ctx->pc = 0x340444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 7));
label_340448:
    // 0x340448: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x340448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x34044c: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x34044Cu;
    {
        const bool branch_taken_0x34044c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34044Cu;
        // 0x340450: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34044c) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x340454u;
    // 0x340454: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x340454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x340458: 0x2463f340  addiu       $v1, $v1, -0xCC0
    ctx->pc = 0x340458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964032));
    // 0x34045c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x34045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340460: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x340460u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340464: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x340464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x340468: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x340468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x34046c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x34046cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x340470: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x340470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x340474: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x340474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340478: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x340478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x34047c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x34047cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x340480: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x340480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x340484: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x340484u;
    {
        const bool branch_taken_0x340484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340484u;
        // 0x340488: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340484) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x34048Cu;
    // 0x34048c: 0x0  nop
    ctx->pc = 0x34048cu;
    // NOP
label_340490:
    // 0x340490: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x340490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x340494: 0xc096988  jal         func_25A620
    ctx->pc = 0x340494u;
    SET_GPR_U32(ctx, 31, 0x34049Cu);
    ctx->pc = 0x340498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340494u;
    // 0x340498: 0x26250870  addiu       $a1, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x340494u, 0x34049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34049Cu;
label_34049c:
    // 0x34049c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34049cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3404a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3404a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3404a4: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x3404a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x3404a8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3404A8u;
    SET_GPR_U32(ctx, 31, 0x3404B0u);
    ctx->pc = 0x3404ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404A8u;
    // 0x3404ac: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3404A8u, 0x3404B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404B0u;
label_3404b0:
    // 0x3404b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3404b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3404b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3404b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3404b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3404b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3404bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3404bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3404c0: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x3404c0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x3404c4: 0x0  nop
    ctx->pc = 0x3404c4u;
    // NOP
    // 0x3404c8: 0x0  nop
    ctx->pc = 0x3404c8u;
    // NOP
    // 0x3404cc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3404CCu;
    SET_GPR_U32(ctx, 31, 0x3404D4u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3404CCu, 0x3404D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404D4u;
label_3404d4:
    // 0x3404d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3404d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3404d8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3404d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3404dc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3404DCu;
    SET_GPR_U32(ctx, 31, 0x3404E4u);
    ctx->pc = 0x3404E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404DCu;
    // 0x3404e0: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3404DCu, 0x3404E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404E4u;
label_3404e4:
    // 0x3404e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3404e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3404e8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x3404E8u;
    SET_GPR_U32(ctx, 31, 0x3404F0u);
    ctx->pc = 0x3404ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404E8u;
    // 0x3404ec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x3404E8u, 0x3404F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404F0u;
label_3404f0:
    // 0x3404f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3404f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3404f4: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x3404f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3404f8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x3404F8u;
    {
        const bool branch_taken_0x3404f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3404f8) {
            ctx->pc = 0x340548u;
            goto label_340548;
        }
    }
    ctx->pc = 0x340500u;
    // 0x340500: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x340500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x340504: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x340504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x340508: 0x2442f348  addiu       $v0, $v0, -0xCB8
    ctx->pc = 0x340508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964040));
    // 0x34050c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340510: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x340510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340518: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x340518u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34051c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x34051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x340520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340524: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x340524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x340528: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x340528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x34052c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x34052cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x340530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x340530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340534: 0xa62707f2  sh          $a3, 0x7F2($s1)
    ctx->pc = 0x340534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x340538: 0xa22607f5  sb          $a2, 0x7F5($s1)
    ctx->pc = 0x340538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x34053c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x34053cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x340540: 0xc0d00a0  jal         func_340280
    ctx->pc = 0x340540u;
    SET_GPR_U32(ctx, 31, 0x340548u);
    ctx->pc = 0x340544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340540u;
    // 0x340544: 0xa2220821  sb          $v0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340280u, 0x340540u, 0x340548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340548u;
label_340548:
    // 0x340548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34054c: 0x0  nop
    ctx->pc = 0x34054cu;
    // NOP
    // 0x340550: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x340550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340554: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x340554u;
    {
        const bool branch_taken_0x340554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340554) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x34055Cu;
    // 0x34055c: 0xc6200874  lwc1        $f0, 0x874($s1)
    ctx->pc = 0x34055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340560: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x340560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x340564: 0xc6220894  lwc1        $f2, 0x894($s1)
    ctx->pc = 0x340564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340568: 0xc6210874  lwc1        $f1, 0x874($s1)
    ctx->pc = 0x340568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34056c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x34056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340570: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x340570u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x340574: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x340574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x340578: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x340578u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x34057c: 0x0  nop
    ctx->pc = 0x34057cu;
    // NOP
    // 0x340580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x340580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x340584: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x340584u;
    {
        const bool branch_taken_0x340584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340584u;
        // 0x340588: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340584) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x34058Cu;
    // 0x34058c: 0x0  nop
    ctx->pc = 0x34058cu;
    // NOP
label_340590:
    // 0x340590: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x340590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x340594: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x340594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x340598: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x340598u;
    {
        const bool branch_taken_0x340598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340598u;
        // 0x34059c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340598) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x3405A0u;
    // 0x3405a0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x3405a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3405a4: 0x2463f340  addiu       $v1, $v1, -0xCC0
    ctx->pc = 0x3405a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964032));
    // 0x3405a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3405a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3405ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3405acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3405b0: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x3405b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3405b4: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3405b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3405b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3405b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3405bc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3405bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3405c0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3405c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3405c4: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x3405c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3405c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3405c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3405cc: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x3405ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3405d0: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3405d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x3405d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3405D4u;
    {
        const bool branch_taken_0x3405d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405D4u;
        // 0x3405d8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405d4) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x3405DCu;
    // 0x3405dc: 0x0  nop
    ctx->pc = 0x3405dcu;
    // NOP
label_3405e0:
    // 0x3405e0: 0xc0a6c74  jal         func_29B1D0
    ctx->pc = 0x3405E0u;
    SET_GPR_U32(ctx, 31, 0x3405E8u);
    ctx->pc = 0x29B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B1D0u, 0x3405E0u, 0x3405E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405E8u;
label_3405e8:
    // 0x3405e8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3405e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3405ec: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3405ECu;
    {
        const bool branch_taken_0x3405ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405ec) {
            ctx->pc = 0x340668u;
            goto label_340668;
        }
    }
    ctx->pc = 0x3405F4u;
    // 0x3405f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3405f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3405f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3405fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3405fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x340600: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x340600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x340604: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x340604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x340608: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x340608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x34060c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x34060cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x340610: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x340610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340618: 0x0  nop
    ctx->pc = 0x340618u;
    // NOP
    // 0x34061c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x34061cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x340620: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x340620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340624: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x340624u;
    {
        const bool branch_taken_0x340624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340624) {
            ctx->pc = 0x34063Cu;
            goto label_34063c;
        }
    }
    ctx->pc = 0x34062Cu;
    // 0x34062c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34062cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x340630: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x340630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340634: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340634u;
    {
        const bool branch_taken_0x340634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340634u;
        // 0x340638: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340634) {
            ctx->pc = 0x340658u;
            goto label_340658;
        }
    }
    ctx->pc = 0x34063Cu;
label_34063c:
    // 0x34063c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34063cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x340640: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x340640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x340644: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x340648: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x340648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34064c: 0x0  nop
    ctx->pc = 0x34064cu;
    // NOP
    // 0x340650: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340654: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x340654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_340658:
    // 0x340658: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x340658u;
    SET_GPR_U32(ctx, 31, 0x340660u);
    ctx->pc = 0x34065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340658u;
    // 0x34065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x340658u, 0x340660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340660u;
label_340660:
    // 0x340660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340664: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x340664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_340668:
    // 0x340668: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x340668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34066c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34066cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340670: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x340670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x340674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x340674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340678: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x340678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34067c: 0x3e00008  jr          $ra
    ctx->pc = 0x34067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34067Cu;
        // 0x340680: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340684u;
}

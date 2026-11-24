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

// Function: sub_00301440
// Address: 0x301440 - 0x301638
void sub_00301440_0x301440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301440_0x301440");
#endif

    switch (ctx->pc) {
        case 0x301494u: goto label_301494;
        case 0x3014a8u: goto label_3014a8;
        case 0x3014e8u: goto label_3014e8;
        case 0x3014f8u: goto label_3014f8;
        case 0x301580u: goto label_301580;
        case 0x301628u: goto label_301628;
        default: break;
    }

    ctx->pc = 0x301440u;

    // 0x301440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x301444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x301448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30144c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301450: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x301450u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x301454: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x301454u;
    {
        const bool branch_taken_0x301454 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x301458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301454u;
        // 0x301458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301454) {
            ctx->pc = 0x3014D8u;
            goto label_3014d8;
        }
    }
    ctx->pc = 0x30145Cu;
    // 0x30145c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301460: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x301460u;
    {
        const bool branch_taken_0x301460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x301460) {
            ctx->pc = 0x3014B8u;
            goto label_3014b8;
        }
    }
    ctx->pc = 0x301468u;
    // 0x301468: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x301468u;
    {
        const bool branch_taken_0x301468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x301468) {
            ctx->pc = 0x301478u;
            goto label_301478;
        }
    }
    ctx->pc = 0x301470u;
    // 0x301470: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x301470u;
    {
        const bool branch_taken_0x301470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301470) {
            ctx->pc = 0x301628u;
            goto label_301628;
        }
    }
    ctx->pc = 0x301478u;
label_301478:
    // 0x301478: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x301478u;
    {
        const bool branch_taken_0x301478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x301478) {
            ctx->pc = 0x3014A0u;
            goto label_3014a0;
        }
    }
    ctx->pc = 0x301480u;
    // 0x301480: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x301480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x301484: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x301484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x301488: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x301488u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x30148c: 0xc0aad90  jal         func_2AB640
    ctx->pc = 0x30148Cu;
    SET_GPR_U32(ctx, 31, 0x301494u);
    ctx->pc = 0x301490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30148Cu;
    // 0x301490: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB640u, 0x30148Cu, 0x301494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301494u;
label_301494:
    // 0x301494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301494u;
    {
        const bool branch_taken_0x301494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301494u;
        // 0x301498: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301494) {
            ctx->pc = 0x3014A8u;
            goto label_3014a8;
        }
    }
    ctx->pc = 0x30149Cu;
    // 0x30149c: 0x0  nop
    ctx->pc = 0x30149cu;
    // NOP
label_3014a0:
    // 0x3014a0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3014A0u;
    SET_GPR_U32(ctx, 31, 0x3014A8u);
    ctx->pc = 0x3014A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014A0u;
    // 0x3014a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3014A0u, 0x3014A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014A8u;
label_3014a8:
    // 0x3014a8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3014a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3014ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3014acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3014b0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3014B0u;
    {
        const bool branch_taken_0x3014b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014B0u;
        // 0x3014b4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014b0) {
            ctx->pc = 0x301628u;
            goto label_301628;
        }
    }
    ctx->pc = 0x3014B8u;
label_3014b8:
    // 0x3014b8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3014b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3014bc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3014bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3014c0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3014c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3014c4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3014c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3014c8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3014c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3014cc: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3014ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3014d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3014d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3014d4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3014d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3014d8:
    // 0x3014d8: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3014d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3014dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3014dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3014e0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3014E0u;
    SET_GPR_U32(ctx, 31, 0x3014E8u);
    ctx->pc = 0x3014E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014E0u;
    // 0x3014e4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3014E0u, 0x3014E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014E8u;
label_3014e8:
    // 0x3014e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3014E8u;
    {
        const bool branch_taken_0x3014e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3014ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014E8u;
        // 0x3014ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014e8) {
            ctx->pc = 0x3014F8u;
            goto label_3014f8;
        }
    }
    ctx->pc = 0x3014F0u;
    // 0x3014f0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3014F0u;
    SET_GPR_U32(ctx, 31, 0x3014F8u);
    ctx->pc = 0x3014F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014F0u;
    // 0x3014f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3014F0u, 0x3014F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014F8u;
label_3014f8:
    // 0x3014f8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3014f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3014fc: 0x28630046  slti        $v1, $v1, 0x46
    ctx->pc = 0x3014fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x301500: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x301500u;
    {
        const bool branch_taken_0x301500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301500u;
        // 0x301504: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301500) {
            ctx->pc = 0x301510u;
            goto label_301510;
        }
    }
    ctx->pc = 0x301508u;
    // 0x301508: 0xa2030558  sb          $v1, 0x558($s0)
    ctx->pc = 0x301508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 3));
    // 0x30150c: 0x0  nop
    ctx->pc = 0x30150cu;
    // NOP
label_301510:
    // 0x301510: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x301510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301514: 0x28830013  slti        $v1, $a0, 0x13
    ctx->pc = 0x301514u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x301518: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x301518u;
    {
        const bool branch_taken_0x301518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301518u;
        // 0x30151c: 0x288100ba  slti        $at, $a0, 0xBA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)186) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301518) {
            ctx->pc = 0x301580u;
            goto label_301580;
        }
    }
    ctx->pc = 0x301520u;
    // 0x301520: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x301520u;
    {
        const bool branch_taken_0x301520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301520) {
            ctx->pc = 0x301580u;
            goto label_301580;
        }
    }
    ctx->pc = 0x301528u;
    // 0x301528: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x301528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30152c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x30152cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301530: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x301530u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x301534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301538: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x301538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30153c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30153cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301540: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x301540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x301544: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x301544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x301548: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x301548u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x30154c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x301550: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x301550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x301554: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x301554u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x301558: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30155c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x30155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x301560: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x301560u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x301564: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x301564u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x301568: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x301568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30156c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30156cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x301570: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x301570u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x301574: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x301574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301578: 0xc0c0900  jal         func_302400
    ctx->pc = 0x301578u;
    SET_GPR_U32(ctx, 31, 0x301580u);
    ctx->pc = 0x30157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301578u;
    // 0x30157c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x301578u, 0x301580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301580u;
label_301580:
    // 0x301580: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x301580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x301584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x301584u;
    {
        const bool branch_taken_0x301584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301584u;
        // 0x301588: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301584) {
            ctx->pc = 0x301598u;
            goto label_301598;
        }
    }
    ctx->pc = 0x30158Cu;
    // 0x30158c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30158Cu;
    {
        const bool branch_taken_0x30158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30158c) {
            ctx->pc = 0x301618u;
            goto label_301618;
        }
    }
    ctx->pc = 0x301594u;
    // 0x301594: 0x0  nop
    ctx->pc = 0x301594u;
    // NOP
label_301598:
    // 0x301598: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x301598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30159c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3015a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3015a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3015a4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3015a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3015a8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3015a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3015ac: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3015ACu;
    {
        const bool branch_taken_0x3015ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3015ac) {
            ctx->pc = 0x3015E8u;
            goto label_3015e8;
        }
    }
    ctx->pc = 0x3015B4u;
    // 0x3015b4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3015b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3015b8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3015b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3015bc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3015BCu;
    {
        const bool branch_taken_0x3015bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3015C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015BCu;
        // 0x3015c0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015bc) {
            ctx->pc = 0x301610u;
            goto label_301610;
        }
    }
    ctx->pc = 0x3015C4u;
    // 0x3015c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3015c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3015c8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3015c8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3015cc: 0x0  nop
    ctx->pc = 0x3015ccu;
    // NOP
    // 0x3015d0: 0x0  nop
    ctx->pc = 0x3015d0u;
    // NOP
    // 0x3015d4: 0x2010  mfhi        $a0
    ctx->pc = 0x3015d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3015d8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3015d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3015dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3015DCu;
    {
        const bool branch_taken_0x3015dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015DCu;
        // 0x3015e0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015dc) {
            ctx->pc = 0x301610u;
            goto label_301610;
        }
    }
    ctx->pc = 0x3015E4u;
    // 0x3015e4: 0x0  nop
    ctx->pc = 0x3015e4u;
    // NOP
label_3015e8:
    // 0x3015e8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3015e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3015ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3015ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3015f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3015F0u;
    {
        const bool branch_taken_0x3015f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3015f0) {
            ctx->pc = 0x301610u;
            goto label_301610;
        }
    }
    ctx->pc = 0x3015F8u;
    // 0x3015f8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3015f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3015fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3015fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301600: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x301600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x301604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301604u;
    {
        const bool branch_taken_0x301604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301604u;
        // 0x301608: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301604) {
            ctx->pc = 0x301618u;
            goto label_301618;
        }
    }
    ctx->pc = 0x30160Cu;
    // 0x30160c: 0x0  nop
    ctx->pc = 0x30160cu;
    // NOP
label_301610:
    // 0x301610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301614: 0x0  nop
    ctx->pc = 0x301614u;
    // NOP
label_301618:
    // 0x301618: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x301618u;
    {
        const bool branch_taken_0x301618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301618u;
        // 0x30161c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301618) {
            ctx->pc = 0x301628u;
            goto label_301628;
        }
    }
    ctx->pc = 0x301620u;
    // 0x301620: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x301620u;
    SET_GPR_U32(ctx, 31, 0x301628u);
    ctx->pc = 0x301624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301620u;
    // 0x301624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x301620u, 0x301628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301628u;
label_301628:
    // 0x301628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x301628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30162c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30162cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301630: 0x3e00008  jr          $ra
    ctx->pc = 0x301630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301630u;
        // 0x301634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301638u;
}

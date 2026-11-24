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

// Function: sub_00353530
// Address: 0x353530 - 0x35394c
void sub_00353530_0x353530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353530_0x353530");
#endif

    switch (ctx->pc) {
        case 0x3535a4u: goto label_3535a4;
        case 0x3535b8u: goto label_3535b8;
        case 0x3535c8u: goto label_3535c8;
        case 0x35361cu: goto label_35361c;
        case 0x353634u: goto label_353634;
        case 0x353644u: goto label_353644;
        case 0x353654u: goto label_353654;
        case 0x353674u: goto label_353674;
        case 0x35369cu: goto label_35369c;
        case 0x3536bcu: goto label_3536bc;
        case 0x353778u: goto label_353778;
        case 0x353790u: goto label_353790;
        case 0x3537a8u: goto label_3537a8;
        case 0x3537e0u: goto label_3537e0;
        case 0x353810u: goto label_353810;
        case 0x353820u: goto label_353820;
        case 0x35388cu: goto label_35388c;
        case 0x353938u: goto label_353938;
        default: break;
    }

    ctx->pc = 0x353530u;

    // 0x353530: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x353530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x353534: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x353534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x353538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35353c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x353540: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x353540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x353544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x353544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353548: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x353548u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x35354c: 0x10a300ac  beq         $a1, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x35354Cu;
    {
        const bool branch_taken_0x35354c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x353550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35354Cu;
        // 0x353550: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35354c) {
            ctx->pc = 0x353800u;
            goto label_353800;
        }
    }
    ctx->pc = 0x353554u;
    // 0x353554: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x353554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353558: 0x10a30089  beq         $a1, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x353558u;
    {
        const bool branch_taken_0x353558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353558u;
        // 0x35355c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353558) {
            ctx->pc = 0x353780u;
            goto label_353780;
        }
    }
    ctx->pc = 0x353560u;
    // 0x353560: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x353560u;
    {
        const bool branch_taken_0x353560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x353560) {
            ctx->pc = 0x3535F8u;
            goto label_3535f8;
        }
    }
    ctx->pc = 0x353568u;
    // 0x353568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35356c: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x35356Cu;
    {
        const bool branch_taken_0x35356c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35356c) {
            ctx->pc = 0x3535D8u;
            goto label_3535d8;
        }
    }
    ctx->pc = 0x353574u;
    // 0x353574: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353574u;
    {
        const bool branch_taken_0x353574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x353574) {
            ctx->pc = 0x353588u;
            goto label_353588;
        }
    }
    ctx->pc = 0x35357Cu;
    // 0x35357c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x35357Cu;
    {
        const bool branch_taken_0x35357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35357c) {
            ctx->pc = 0x353938u;
            goto label_353938;
        }
    }
    ctx->pc = 0x353584u;
    // 0x353584: 0x0  nop
    ctx->pc = 0x353584u;
    // NOP
label_353588:
    // 0x353588: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x353588u;
    {
        const bool branch_taken_0x353588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353588u;
        // 0x35358c: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353588) {
            ctx->pc = 0x3535C0u;
            goto label_3535c0;
        }
    }
    ctx->pc = 0x353590u;
    // 0x353590: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x353590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353594: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x353594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x353598: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x35359c: 0xc097384  jal         func_25CE10
    ctx->pc = 0x35359Cu;
    SET_GPR_U32(ctx, 31, 0x3535A4u);
    ctx->pc = 0x3535A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35359Cu;
    // 0x3535a0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x35359Cu, 0x3535A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535A4u;
label_3535a4:
    // 0x3535a4: 0x8e06085c  lw          $a2, 0x85C($s0)
    ctx->pc = 0x3535a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x3535a8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3535a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3535ac: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3535acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3535b0: 0xc0a9898  jal         func_2A6260
    ctx->pc = 0x3535B0u;
    SET_GPR_U32(ctx, 31, 0x3535B8u);
    ctx->pc = 0x3535B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535B0u;
    // 0x3535b4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6260u, 0x3535B0u, 0x3535B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535B8u;
label_3535b8:
    // 0x3535b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3535B8u;
    {
        const bool branch_taken_0x3535b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535B8u;
        // 0x3535bc: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535b8) {
            ctx->pc = 0x3535C8u;
            goto label_3535c8;
        }
    }
    ctx->pc = 0x3535C0u;
label_3535c0:
    // 0x3535c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3535C0u;
    SET_GPR_U32(ctx, 31, 0x3535C8u);
    ctx->pc = 0x3535C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535C0u;
    // 0x3535c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3535C0u, 0x3535C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535C8u;
label_3535c8:
    // 0x3535c8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3535c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3535cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3535ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3535d0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x3535D0u;
    {
        const bool branch_taken_0x3535d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3535D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535D0u;
        // 0x3535d4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3535d0) {
            ctx->pc = 0x353938u;
            goto label_353938;
        }
    }
    ctx->pc = 0x3535D8u;
label_3535d8:
    // 0x3535d8: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3535d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3535dc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3535dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3535e0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3535e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3535e4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3535e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3535e8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3535e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3535ec: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3535ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3535f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3535f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3535f4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3535f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3535f8:
    // 0x3535f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3535fc: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3535fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x353600: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x353600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x353608: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x35360c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x35360cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353610: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x353610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x353614: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x353614u;
    SET_GPR_U32(ctx, 31, 0x35361Cu);
    ctx->pc = 0x353618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353614u;
    // 0x353618: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x353614u, 0x35361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35361Cu;
label_35361c:
    // 0x35361c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x35361cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x353620: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x353620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353624: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x353624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x353628: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x353628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x35362c: 0xc097384  jal         func_25CE10
    ctx->pc = 0x35362Cu;
    SET_GPR_U32(ctx, 31, 0x353634u);
    ctx->pc = 0x353630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35362Cu;
    // 0x353630: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x35362Cu, 0x353634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353634u;
label_353634:
    // 0x353634: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x353634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x353638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35363c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x35363Cu;
    SET_GPR_U32(ctx, 31, 0x353644u);
    ctx->pc = 0x353640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35363Cu;
    // 0x353640: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x35363Cu, 0x353644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353644u;
label_353644:
    // 0x353644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353644u;
    {
        const bool branch_taken_0x353644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353644u;
        // 0x353648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353644) {
            ctx->pc = 0x353658u;
            goto label_353658;
        }
    }
    ctx->pc = 0x35364Cu;
    // 0x35364c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35364Cu;
    SET_GPR_U32(ctx, 31, 0x353654u);
    ctx->pc = 0x353650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35364Cu;
    // 0x353650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35364Cu, 0x353654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353654u;
label_353654:
    // 0x353654: 0x0  nop
    ctx->pc = 0x353654u;
    // NOP
label_353658:
    // 0x353658: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x353658u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x35365c: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x35365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353664: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x353664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x353668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35366c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x35366Cu;
    SET_GPR_U32(ctx, 31, 0x353674u);
    ctx->pc = 0x353670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35366Cu;
    // 0x353670: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x35366Cu, 0x353674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353674u;
label_353674:
    // 0x353674: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x353674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x353678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35367c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x35367cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x353680: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x353680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x353684: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x353684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x353688: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35368c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x35368cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353690: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x353690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353694: 0xc0c0980  jal         func_302600
    ctx->pc = 0x353694u;
    SET_GPR_U32(ctx, 31, 0x35369Cu);
    ctx->pc = 0x353698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353694u;
    // 0x353698: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x353694u, 0x35369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35369Cu;
label_35369c:
    // 0x35369c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35369Cu;
    {
        const bool branch_taken_0x35369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35369c) {
            ctx->pc = 0x3536D0u;
            goto label_3536d0;
        }
    }
    ctx->pc = 0x3536A4u;
    // 0x3536a4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3536a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3536a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3536a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536ac: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3536acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3536b0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3536b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3536b4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3536B4u;
    SET_GPR_U32(ctx, 31, 0x3536BCu);
    ctx->pc = 0x3536B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536B4u;
    // 0x3536b8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3536B4u, 0x3536BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536BCu;
label_3536bc:
    // 0x3536bc: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3536bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3536c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3536c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3536c4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3536C4u;
    {
        const bool branch_taken_0x3536c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536C4u;
        // 0x3536c8: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536c4) {
            ctx->pc = 0x353938u;
            goto label_353938;
        }
    }
    ctx->pc = 0x3536CCu;
    // 0x3536cc: 0x0  nop
    ctx->pc = 0x3536ccu;
    // NOP
label_3536d0:
    // 0x3536d0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3536d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3536d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3536D4u;
    {
        const bool branch_taken_0x3536d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536D4u;
        // 0x3536d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536d4) {
            ctx->pc = 0x3536E8u;
            goto label_3536e8;
        }
    }
    ctx->pc = 0x3536DCu;
    // 0x3536dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3536DCu;
    {
        const bool branch_taken_0x3536dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3536dc) {
            ctx->pc = 0x353768u;
            goto label_353768;
        }
    }
    ctx->pc = 0x3536E4u;
    // 0x3536e4: 0x0  nop
    ctx->pc = 0x3536e4u;
    // NOP
label_3536e8:
    // 0x3536e8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3536e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3536ec: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3536ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3536f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3536f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3536f4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3536f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3536f8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3536f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3536fc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3536FCu;
    {
        const bool branch_taken_0x3536fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3536fc) {
            ctx->pc = 0x353738u;
            goto label_353738;
        }
    }
    ctx->pc = 0x353704u;
    // 0x353704: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x353704u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353708: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x353708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x35370c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35370Cu;
    {
        const bool branch_taken_0x35370c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35370Cu;
        // 0x353710: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35370c) {
            ctx->pc = 0x353760u;
            goto label_353760;
        }
    }
    ctx->pc = 0x353714u;
    // 0x353714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353718: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x353718u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35371c: 0x0  nop
    ctx->pc = 0x35371cu;
    // NOP
    // 0x353720: 0x0  nop
    ctx->pc = 0x353720u;
    // NOP
    // 0x353724: 0x2010  mfhi        $a0
    ctx->pc = 0x353724u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x353728: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353728u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35372c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35372Cu;
    {
        const bool branch_taken_0x35372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35372Cu;
        // 0x353730: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35372c) {
            ctx->pc = 0x353760u;
            goto label_353760;
        }
    }
    ctx->pc = 0x353734u;
    // 0x353734: 0x0  nop
    ctx->pc = 0x353734u;
    // NOP
label_353738:
    // 0x353738: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x353738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x35373c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x35373cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x353740: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353740u;
    {
        const bool branch_taken_0x353740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353740) {
            ctx->pc = 0x353760u;
            goto label_353760;
        }
    }
    ctx->pc = 0x353748u;
    // 0x353748: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353748u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35374c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353750: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x353750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x353754: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353754u;
    {
        const bool branch_taken_0x353754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353754u;
        // 0x353758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353754) {
            ctx->pc = 0x353768u;
            goto label_353768;
        }
    }
    ctx->pc = 0x35375Cu;
    // 0x35375c: 0x0  nop
    ctx->pc = 0x35375cu;
    // NOP
label_353760:
    // 0x353760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353764: 0x0  nop
    ctx->pc = 0x353764u;
    // NOP
label_353768:
    // 0x353768: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x353768u;
    {
        const bool branch_taken_0x353768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353768u;
        // 0x35376c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353768) {
            ctx->pc = 0x353938u;
            goto label_353938;
        }
    }
    ctx->pc = 0x353770u;
    // 0x353770: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353770u;
    SET_GPR_U32(ctx, 31, 0x353778u);
    ctx->pc = 0x353774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353770u;
    // 0x353774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353770u, 0x353778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353778u;
label_353778:
    // 0x353778: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x353778u;
    {
        const bool branch_taken_0x353778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353778) {
            ctx->pc = 0x353938u;
            goto label_353938;
        }
    }
    ctx->pc = 0x353780u;
label_353780:
    // 0x353780: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x353780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353784: 0xa2220558  sb          $v0, 0x558($s1)
    ctx->pc = 0x353784u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x353788: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x353788u;
    SET_GPR_U32(ctx, 31, 0x353790u);
    ctx->pc = 0x35378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353788u;
    // 0x35378c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x353788u, 0x353790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353790u;
label_353790:
    // 0x353790: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x353790u;
    {
        const bool branch_taken_0x353790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353790u;
        // 0x353794: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353790) {
            ctx->pc = 0x3537E0u;
            goto label_3537e0;
        }
    }
    ctx->pc = 0x353798u;
    // 0x353798: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x353798u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x35379c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x35379cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3537a0: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x3537A0u;
    SET_GPR_U32(ctx, 31, 0x3537A8u);
    ctx->pc = 0x3537A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3537A0u;
    // 0x3537a4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x3537A0u, 0x3537A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537A8u;
label_3537a8:
    // 0x3537a8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3537a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3537ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3537b0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3537b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3537b4: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x3537b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x3537b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3537b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3537bc: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3537bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3537c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3537c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537c4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3537c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3537c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3537c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3537ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3537d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3537d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537d8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3537D8u;
    SET_GPR_U32(ctx, 31, 0x3537E0u);
    ctx->pc = 0x3537DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3537D8u;
    // 0x3537dc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3537D8u, 0x3537E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537E0u;
label_3537e0:
    // 0x3537e0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3537e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3537e4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3537e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3537e8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3537e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3537ec: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3537ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3537f0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3537f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3537f4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3537f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3537f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3537f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3537fc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3537fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_353800:
    // 0x353800: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x353800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x353804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353808: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x353808u;
    SET_GPR_U32(ctx, 31, 0x353810u);
    ctx->pc = 0x35380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353808u;
    // 0x35380c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x353808u, 0x353810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353810u;
label_353810:
    // 0x353810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353810u;
    {
        const bool branch_taken_0x353810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353810u;
        // 0x353814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353810) {
            ctx->pc = 0x353820u;
            goto label_353820;
        }
    }
    ctx->pc = 0x353818u;
    // 0x353818: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353818u;
    SET_GPR_U32(ctx, 31, 0x353820u);
    ctx->pc = 0x35381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353818u;
    // 0x35381c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353818u, 0x353820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353820u;
label_353820:
    // 0x353820: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x353820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x353824: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x353824u;
    {
        const bool branch_taken_0x353824 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x353828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353824u;
        // 0x353828: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353824) {
            ctx->pc = 0x353890u;
            goto label_353890;
        }
    }
    ctx->pc = 0x35382Cu;
    // 0x35382c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x35382Cu;
    {
        const bool branch_taken_0x35382c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35382c) {
            ctx->pc = 0x353890u;
            goto label_353890;
        }
    }
    ctx->pc = 0x353834u;
    // 0x353834: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x353834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x353838: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x353838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35383c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x35383cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x353840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353844: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x353844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x353848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35384c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35384cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x353850: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x353850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x353854: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x353854u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x353858: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35385c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x35385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x353860: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x353860u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x353864: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x353868: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x353868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x35386c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x35386cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x353870: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x353870u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x353874: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x353874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x353878: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x353878u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x35387c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x35387cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x353880: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x353880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353884: 0xc0c0900  jal         func_302400
    ctx->pc = 0x353884u;
    SET_GPR_U32(ctx, 31, 0x35388Cu);
    ctx->pc = 0x353888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353884u;
    // 0x353888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x353884u, 0x35388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35388Cu;
label_35388c:
    // 0x35388c: 0x0  nop
    ctx->pc = 0x35388cu;
    // NOP
label_353890:
    // 0x353890: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x353890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x353894: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353894u;
    {
        const bool branch_taken_0x353894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353894u;
        // 0x353898: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353894) {
            ctx->pc = 0x3538A8u;
            goto label_3538a8;
        }
    }
    ctx->pc = 0x35389Cu;
    // 0x35389c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35389Cu;
    {
        const bool branch_taken_0x35389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35389c) {
            ctx->pc = 0x353928u;
            goto label_353928;
        }
    }
    ctx->pc = 0x3538A4u;
    // 0x3538a4: 0x0  nop
    ctx->pc = 0x3538a4u;
    // NOP
label_3538a8:
    // 0x3538a8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3538a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3538ac: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3538acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3538b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3538b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3538b4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3538b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3538b8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3538b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3538bc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3538BCu;
    {
        const bool branch_taken_0x3538bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3538bc) {
            ctx->pc = 0x3538F8u;
            goto label_3538f8;
        }
    }
    ctx->pc = 0x3538C4u;
    // 0x3538c4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3538c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3538c8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3538c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3538cc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3538CCu;
    {
        const bool branch_taken_0x3538cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3538D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538CCu;
        // 0x3538d0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538cc) {
            ctx->pc = 0x353920u;
            goto label_353920;
        }
    }
    ctx->pc = 0x3538D4u;
    // 0x3538d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3538d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3538d8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3538d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3538dc: 0x0  nop
    ctx->pc = 0x3538dcu;
    // NOP
    // 0x3538e0: 0x0  nop
    ctx->pc = 0x3538e0u;
    // NOP
    // 0x3538e4: 0x2010  mfhi        $a0
    ctx->pc = 0x3538e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3538e8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3538e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3538ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3538ECu;
    {
        const bool branch_taken_0x3538ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3538F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538ECu;
        // 0x3538f0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538ec) {
            ctx->pc = 0x353920u;
            goto label_353920;
        }
    }
    ctx->pc = 0x3538F4u;
    // 0x3538f4: 0x0  nop
    ctx->pc = 0x3538f4u;
    // NOP
label_3538f8:
    // 0x3538f8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3538f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3538fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3538fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x353900: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353900u;
    {
        const bool branch_taken_0x353900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353900) {
            ctx->pc = 0x353920u;
            goto label_353920;
        }
    }
    ctx->pc = 0x353908u;
    // 0x353908: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x353908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35390c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353910: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x353910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x353914: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x353914u;
    {
        const bool branch_taken_0x353914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353914u;
        // 0x353918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353914) {
            ctx->pc = 0x353928u;
            goto label_353928;
        }
    }
    ctx->pc = 0x35391Cu;
    // 0x35391c: 0x0  nop
    ctx->pc = 0x35391cu;
    // NOP
label_353920:
    // 0x353920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353924: 0x0  nop
    ctx->pc = 0x353924u;
    // NOP
label_353928:
    // 0x353928: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353928u;
    {
        const bool branch_taken_0x353928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353928u;
        // 0x35392c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353928) {
            ctx->pc = 0x353938u;
            goto label_353938;
        }
    }
    ctx->pc = 0x353930u;
    // 0x353930: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353930u;
    SET_GPR_U32(ctx, 31, 0x353938u);
    ctx->pc = 0x353934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353930u;
    // 0x353934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353930u, 0x353938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353938u;
label_353938:
    // 0x353938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x353938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35393c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35393cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x353940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353944: 0x3e00008  jr          $ra
    ctx->pc = 0x353944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353944u;
        // 0x353948: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35394Cu;
}

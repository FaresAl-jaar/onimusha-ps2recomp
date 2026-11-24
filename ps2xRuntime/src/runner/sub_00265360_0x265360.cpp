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

// Function: sub_00265360
// Address: 0x265360 - 0x2654b8
void sub_00265360_0x265360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265360_0x265360");
#endif

    switch (ctx->pc) {
        case 0x2653a0u: goto label_2653a0;
        default: break;
    }

    ctx->pc = 0x265360u;

    // 0x265360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26536c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265370: 0xdc900020  ld          $s0, 0x20($a0)
    ctx->pc = 0x265370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x265374: 0x32030400  andi        $v1, $s0, 0x400
    ctx->pc = 0x265374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
    // 0x265378: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x265378u;
    {
        const bool branch_taken_0x265378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265378u;
        // 0x26537c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265378) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265380u;
    // 0x265380: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x265380u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x265384: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x265384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x265388: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265388u;
    {
        const bool branch_taken_0x265388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265388) {
            ctx->pc = 0x265398u;
            goto label_265398;
        }
    }
    ctx->pc = 0x265390u;
    // 0x265390: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x265390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
    // 0x265394: 0x0  nop
    ctx->pc = 0x265394u;
    // NOP
label_265398:
    // 0x265398: 0xc096a08  jal         func_25A820
    ctx->pc = 0x265398u;
    SET_GPR_U32(ctx, 31, 0x2653A0u);
    ctx->pc = 0x26539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265398u;
    // 0x26539c: 0x8624000a  lh          $a0, 0xA($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x265398u, 0x2653A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653A0u;
label_2653a0:
    // 0x2653a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2653a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2653a4: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2653A4u;
    {
        const bool branch_taken_0x2653a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2653A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653A4u;
        // 0x2653a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653a4) {
            ctx->pc = 0x265468u;
            goto label_265468;
        }
    }
    ctx->pc = 0x2653ACu;
    // 0x2653ac: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2653ACu;
    {
        const bool branch_taken_0x2653ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2653ac) {
            ctx->pc = 0x265438u;
            goto label_265438;
        }
    }
    ctx->pc = 0x2653B4u;
    // 0x2653b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2653b8: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2653B8u;
    {
        const bool branch_taken_0x2653b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2653b8) {
            ctx->pc = 0x265400u;
            goto label_265400;
        }
    }
    ctx->pc = 0x2653C0u;
    // 0x2653c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2653C0u;
    {
        const bool branch_taken_0x2653c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653c0) {
            ctx->pc = 0x2653D0u;
            goto label_2653d0;
        }
    }
    ctx->pc = 0x2653C8u;
    // 0x2653c8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2653C8u;
    {
        const bool branch_taken_0x2653c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653c8) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x2653D0u;
label_2653d0:
    // 0x2653d0: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x2653d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x2653d4: 0x32031000  andi        $v1, $s0, 0x1000
    ctx->pc = 0x2653d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
    // 0x2653d8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2653D8u;
    {
        const bool branch_taken_0x2653d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653D8u;
        // 0x2653dc: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653d8) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x2653E0u;
    // 0x2653e0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2653e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2653e4: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x2653e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x2653e8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2653E8u;
    {
        const bool branch_taken_0x2653e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653e8) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x2653F0u;
    // 0x2653f0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2653f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2653f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2653f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2653f8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2653F8u;
    {
        const bool branch_taken_0x2653f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653F8u;
        // 0x2653fc: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653f8) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265400u;
label_265400:
    // 0x265400: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x265400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x265404: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x265404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x265408: 0x32031000  andi        $v1, $s0, 0x1000
    ctx->pc = 0x265408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
    // 0x26540c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x26540Cu;
    {
        const bool branch_taken_0x26540c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26540Cu;
        // 0x265410: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26540c) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265414u;
    // 0x265414: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x265414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x265418: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x265418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x26541c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x26541Cu;
    {
        const bool branch_taken_0x26541c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26541c) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265424u;
    // 0x265424: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x265424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x265428: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x265428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26542c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26542Cu;
    {
        const bool branch_taken_0x26542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26542Cu;
        // 0x265430: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26542c) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265434u;
    // 0x265434: 0x0  nop
    ctx->pc = 0x265434u;
    // NOP
label_265438:
    // 0x265438: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x265438u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x26543c: 0x32031000  andi        $v1, $s0, 0x1000
    ctx->pc = 0x26543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
    // 0x265440: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x265440u;
    {
        const bool branch_taken_0x265440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265440u;
        // 0x265444: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265440) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265448u;
    // 0x265448: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x265448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x26544c: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x26544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x265450: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x265450u;
    {
        const bool branch_taken_0x265450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265450) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265458u;
    // 0x265458: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x265458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x26545c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26545cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265460u;
    {
        const bool branch_taken_0x265460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265460u;
        // 0x265464: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265460) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x265468u;
label_265468:
    // 0x265468: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x265468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26546c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x26546cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x265470: 0x32031000  andi        $v1, $s0, 0x1000
    ctx->pc = 0x265470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
    // 0x265474: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x265474u;
    {
        const bool branch_taken_0x265474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265474u;
        // 0x265478: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265474) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x26547Cu;
    // 0x26547c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x26547cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x265480: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x265480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x265484: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265484u;
    {
        const bool branch_taken_0x265484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265484) {
            ctx->pc = 0x265498u;
            goto label_265498;
        }
    }
    ctx->pc = 0x26548Cu;
    // 0x26548c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x26548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x265490: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x265490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265494: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x265494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_265498:
    // 0x265498: 0xde230020  ld          $v1, 0x20($s1)
    ctx->pc = 0x265498u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26549c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x26549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x2654a0: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x2654a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x2654a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2654a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2654a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2654a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2654ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2654acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2654b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2654B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2654B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654B0u;
        // 0x2654b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2654B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2654B8u;
}

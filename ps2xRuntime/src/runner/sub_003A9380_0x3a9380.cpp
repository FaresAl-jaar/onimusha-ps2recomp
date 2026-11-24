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

// Function: sub_003A9380
// Address: 0x3a9380 - 0x3a9578
void sub_003A9380_0x3a9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9380_0x3a9380");
#endif

    switch (ctx->pc) {
        case 0x3a93d4u: goto label_3a93d4;
        case 0x3a93f0u: goto label_3a93f0;
        case 0x3a9428u: goto label_3a9428;
        case 0x3a9444u: goto label_3a9444;
        case 0x3a94a8u: goto label_3a94a8;
        case 0x3a94c4u: goto label_3a94c4;
        case 0x3a9534u: goto label_3a9534;
        case 0x3a9568u: goto label_3a9568;
        default: break;
    }

    ctx->pc = 0x3a9380u;

    // 0x3a9380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a9384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a9384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a9388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a938c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a9390: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x3a9390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a9394: 0x10a7002e  beq         $a1, $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A9394u;
    {
        const bool branch_taken_0x3a9394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3A9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9394u;
        // 0x3a9398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9394) {
            ctx->pc = 0x3A9450u;
            goto label_3a9450;
        }
    }
    ctx->pc = 0x3A939Cu;
    // 0x3a939c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A939Cu;
    {
        const bool branch_taken_0x3a939c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a939c) {
            ctx->pc = 0x3A93B0u;
            goto label_3a93b0;
        }
    }
    ctx->pc = 0x3A93A4u;
    // 0x3a93a4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3A93A4u;
    {
        const bool branch_taken_0x3a93a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a93a4) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A93ACu;
    // 0x3a93ac: 0x0  nop
    ctx->pc = 0x3a93acu;
    // NOP
label_3a93b0:
    // 0x3a93b0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a93b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a93b4: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x3A93B4u;
    {
        const bool branch_taken_0x3a93b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a93b4) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A93BCu;
    // 0x3a93bc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a93c0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a93c4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3a93c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a93c8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a93cc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A93CCu;
    SET_GPR_U32(ctx, 31, 0x3A93D4u);
    ctx->pc = 0x3A93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A93CCu;
    // 0x3a93d0: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A93CCu, 0x3A93D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A93D4u;
label_3a93d4:
    // 0x3a93d4: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x3a93d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a93d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A93D8u;
    {
        const bool branch_taken_0x3a93d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93D8u;
        // 0x3a93dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93d8) {
            ctx->pc = 0x3A93F8u;
            goto label_3a93f8;
        }
    }
    ctx->pc = 0x3A93E0u;
    // 0x3a93e0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x3a93e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3a93e4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x3a93e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3a93e8: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A93E8u;
    SET_GPR_U32(ctx, 31, 0x3A93F0u);
    ctx->pc = 0x3A93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A93E8u;
    // 0x3a93ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A93E8u, 0x3A93F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A93F0u;
label_3a93f0:
    // 0x3a93f0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3A93F0u;
    {
        const bool branch_taken_0x3a93f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a93f0) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A93F8u;
label_3a93f8:
    // 0x3a93f8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x3a93f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a93fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a9400: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A9400u;
    {
        const bool branch_taken_0x3a9400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9400) {
            ctx->pc = 0x3A9430u;
            goto label_3a9430;
        }
    }
    ctx->pc = 0x3A9408u;
    // 0x3a9408: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x3a9408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x3a940c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a9410: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A9410u;
    {
        const bool branch_taken_0x3a9410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9410u;
        // 0x3a9414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9410) {
            ctx->pc = 0x3A9430u;
            goto label_3a9430;
        }
    }
    ctx->pc = 0x3A9418u;
    // 0x3a9418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a941c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9420: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9420u;
    SET_GPR_U32(ctx, 31, 0x3A9428u);
    ctx->pc = 0x3A9424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9420u;
    // 0x3a9424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9420u, 0x3A9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9428u;
label_3a9428:
    // 0x3a9428: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3A9428u;
    {
        const bool branch_taken_0x3a9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9428) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A9430u;
label_3a9430:
    // 0x3a9430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9434: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x3a9434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3a9438: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x3a9438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3a943c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A943Cu;
    SET_GPR_U32(ctx, 31, 0x3A9444u);
    ctx->pc = 0x3A9440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A943Cu;
    // 0x3a9440: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A943Cu, 0x3A9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9444u;
label_3a9444:
    // 0x3a9444: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3A9444u;
    {
        const bool branch_taken_0x3a9444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9444) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A944Cu;
    // 0x3a944c: 0x0  nop
    ctx->pc = 0x3a944cu;
    // NOP
label_3a9450:
    // 0x3a9450: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3a9450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9454: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A9454u;
    {
        const bool branch_taken_0x3a9454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9454) {
            ctx->pc = 0x3A94E8u;
            goto label_3a94e8;
        }
    }
    ctx->pc = 0x3A945Cu;
    // 0x3a945c: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x3a945cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9460: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a9460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a9464: 0x24638e98  addiu       $v1, $v1, -0x7168
    ctx->pc = 0x3a9464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938264));
    // 0x3a9468: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3a9468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3a946c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3a946cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a9470: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a9470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a9474: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a9474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a9478: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a9478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a947c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a9480: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a9480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9484: 0x1467000a  bne         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3A9484u;
    {
        const bool branch_taken_0x3a9484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3a9484) {
            ctx->pc = 0x3A94B0u;
            goto label_3a94b0;
        }
    }
    ctx->pc = 0x3A948Cu;
    // 0x3a948c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a948cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9490: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9494: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9498: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a949c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a949cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a94a0: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A94A0u;
    SET_GPR_U32(ctx, 31, 0x3A94A8u);
    ctx->pc = 0x3A94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94A0u;
    // 0x3a94a4: 0x82050007  lb          $a1, 0x7($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A94A0u, 0x3A94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94A8u;
label_3a94a8:
    // 0x3a94a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3A94A8u;
    {
        const bool branch_taken_0x3a94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a94a8) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A94B0u;
label_3a94b0:
    // 0x3a94b0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a94b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a94b4: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A94B4u;
    {
        const bool branch_taken_0x3a94b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94B4u;
        // 0x3a94b8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94b4) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A94BCu;
    // 0x3a94bc: 0xc095150  jal         func_254540
    ctx->pc = 0x3A94BCu;
    SET_GPR_U32(ctx, 31, 0x3A94C4u);
    ctx->pc = 0x3A94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A94BCu;
    // 0x3a94c0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A94BCu, 0x3A94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A94C4u;
label_3a94c4:
    // 0x3a94c4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A94C4u;
    {
        const bool branch_taken_0x3a94c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a94c4) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A94CCu;
    // 0x3a94cc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a94ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a94d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a94d4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a94d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a94d8: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a94d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a94dc: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a94dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a94e0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A94E0u;
    {
        const bool branch_taken_0x3a94e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94E0u;
        // 0x3a94e4: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94e0) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A94E8u;
label_3a94e8:
    // 0x3a94e8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a94e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a94ec: 0x8c238e98  lw          $v1, -0x7168($at)
    ctx->pc = 0x3a94ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8E98u));
    // 0x3a94f0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A94F0u;
    {
        const bool branch_taken_0x3a94f0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3A94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94F0u;
        // 0x3a94f4: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94f0) {
            ctx->pc = 0x3A9508u;
            goto label_3a9508;
        }
    }
    ctx->pc = 0x3A94F8u;
    // 0x3a94f8: 0x8c238f0c  lw          $v1, -0x70F4($at)
    ctx->pc = 0x3a94f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938380)));
    // 0x3a94fc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A94FCu;
    {
        const bool branch_taken_0x3a94fc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3a94fc) {
            ctx->pc = 0x3A9520u;
            goto label_3a9520;
        }
    }
    ctx->pc = 0x3A9504u;
    // 0x3a9504: 0x0  nop
    ctx->pc = 0x3a9504u;
    // NOP
label_3a9508:
    // 0x3a9508: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a950c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a950cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9510: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9514: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A9514u;
    {
        const bool branch_taken_0x3a9514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9514u;
        // 0x3a9518: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9514) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A951Cu;
    // 0x3a951c: 0x0  nop
    ctx->pc = 0x3a951cu;
    // NOP
label_3a9520:
    // 0x3a9520: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a9524: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A9524u;
    {
        const bool branch_taken_0x3a9524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9524u;
        // 0x3a9528: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9524) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A952Cu;
    // 0x3a952c: 0xc095150  jal         func_254540
    ctx->pc = 0x3A952Cu;
    SET_GPR_U32(ctx, 31, 0x3A9534u);
    ctx->pc = 0x3A9530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A952Cu;
    // 0x3a9530: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A952Cu, 0x3A9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9534u;
label_3a9534:
    // 0x3a9534: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A9534u;
    {
        const bool branch_taken_0x3a9534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9534) {
            ctx->pc = 0x3A9568u;
            goto label_3a9568;
        }
    }
    ctx->pc = 0x3A953Cu;
    // 0x3a953c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a953cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9540: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a9540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a9544: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a9544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a954c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a954cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9550: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x3a9550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3a9554: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9558: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a9558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a955c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a955cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9560: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9560u;
    SET_GPR_U32(ctx, 31, 0x3A9568u);
    ctx->pc = 0x3A9564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9560u;
    // 0x3a9564: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9560u, 0x3A9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9568u;
label_3a9568:
    // 0x3a9568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a956c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a956cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9570: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9570u;
        // 0x3a9574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9578u;
}

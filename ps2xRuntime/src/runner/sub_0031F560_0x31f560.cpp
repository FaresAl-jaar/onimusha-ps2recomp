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

// Function: sub_0031F560
// Address: 0x31f560 - 0x31fbc4
void sub_0031F560_0x31f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F560_0x31f560");
#endif

    switch (ctx->pc) {
        case 0x31f600u: goto label_31f600;
        case 0x31f630u: goto label_31f630;
        case 0x31f650u: goto label_31f650;
        case 0x31f680u: goto label_31f680;
        case 0x31f690u: goto label_31f690;
        case 0x31f6e4u: goto label_31f6e4;
        case 0x31f710u: goto label_31f710;
        case 0x31f758u: goto label_31f758;
        case 0x31f768u: goto label_31f768;
        case 0x31f830u: goto label_31f830;
        case 0x31f890u: goto label_31f890;
        case 0x31f8a4u: goto label_31f8a4;
        case 0x31f8b8u: goto label_31f8b8;
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8dcu: goto label_31f8dc;
        case 0x31f8f0u: goto label_31f8f0;
        case 0x31f904u: goto label_31f904;
        case 0x31f924u: goto label_31f924;
        case 0x31f95cu: goto label_31f95c;
        case 0x31f978u: goto label_31f978;
        case 0x31f9b0u: goto label_31f9b0;
        case 0x31f9e0u: goto label_31f9e0;
        case 0x31f9f8u: goto label_31f9f8;
        case 0x31fa10u: goto label_31fa10;
        case 0x31fa2cu: goto label_31fa2c;
        case 0x31fad0u: goto label_31fad0;
        case 0x31fb08u: goto label_31fb08;
        case 0x31fbb0u: goto label_31fbb0;
        default: break;
    }

    ctx->pc = 0x31f560u;

    // 0x31f560: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31f564: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x31f564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31f568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31f56c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31f570: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31f570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31f574: 0x90890521  lbu         $t1, 0x521($a0)
    ctx->pc = 0x31f574u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x31f578: 0x11280115  beq         $t1, $t0, . + 4 + (0x115 << 2)
    ctx->pc = 0x31F578u;
    {
        const bool branch_taken_0x31f578 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x31F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F578u;
        // 0x31f57c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f578) {
            ctx->pc = 0x31F9D0u;
            goto label_31f9d0;
        }
    }
    ctx->pc = 0x31F580u;
    // 0x31f580: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31f584: 0x112300ac  beq         $t1, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x31F584u;
    {
        const bool branch_taken_0x31f584 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F584u;
        // 0x31f588: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f584) {
            ctx->pc = 0x31F838u;
            goto label_31f838;
        }
    }
    ctx->pc = 0x31F58Cu;
    // 0x31f58c: 0x1127004c  beq         $t1, $a3, . + 4 + (0x4C << 2)
    ctx->pc = 0x31F58Cu;
    {
        const bool branch_taken_0x31f58c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x31F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F58Cu;
        // 0x31f590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f58c) {
            ctx->pc = 0x31F6C0u;
            goto label_31f6c0;
        }
    }
    ctx->pc = 0x31F594u;
    // 0x31f594: 0x11260042  beq         $t1, $a2, . + 4 + (0x42 << 2)
    ctx->pc = 0x31F594u;
    {
        const bool branch_taken_0x31f594 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x31f594) {
            ctx->pc = 0x31F6A0u;
            goto label_31f6a0;
        }
    }
    ctx->pc = 0x31F59Cu;
    // 0x31f59c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F59Cu;
    {
        const bool branch_taken_0x31f59c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f59c) {
            ctx->pc = 0x31F5B0u;
            goto label_31f5b0;
        }
    }
    ctx->pc = 0x31F5A4u;
    // 0x31f5a4: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x31F5A4u;
    {
        const bool branch_taken_0x31f5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5a4) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31F5ACu;
    // 0x31f5ac: 0x0  nop
    ctx->pc = 0x31f5acu;
    // NOP
label_31f5b0:
    // 0x31f5b0: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x31F5B0u;
    {
        const bool branch_taken_0x31f5b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5b0) {
            ctx->pc = 0x31F688u;
            goto label_31f688;
        }
    }
    ctx->pc = 0x31F5B8u;
    // 0x31f5b8: 0x92040591  lbu         $a0, 0x591($s0)
    ctx->pc = 0x31f5b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1425)));
    // 0x31f5bc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31f5c0: 0x2463ca89  addiu       $v1, $v1, -0x3577
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953609));
    // 0x31f5c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31f5c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f5cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31f5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f5d0: 0x10660019  beq         $v1, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x31F5D0u;
    {
        const bool branch_taken_0x31f5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x31f5d0) {
            ctx->pc = 0x31F638u;
            goto label_31f638;
        }
    }
    ctx->pc = 0x31F5D8u;
    // 0x31f5d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F5D8u;
    {
        const bool branch_taken_0x31f5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5d8) {
            ctx->pc = 0x31F5E8u;
            goto label_31f5e8;
        }
    }
    ctx->pc = 0x31F5E0u;
    // 0x31f5e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x31F5E0u;
    {
        const bool branch_taken_0x31f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5e0) {
            ctx->pc = 0x31F690u;
            goto label_31f690;
        }
    }
    ctx->pc = 0x31F5E8u;
label_31f5e8:
    // 0x31f5e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31f5ec: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x31f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x31f5f0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31f5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31f5f8: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x31F5F8u;
    SET_GPR_U32(ctx, 31, 0x31F600u);
    ctx->pc = 0x31F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5F8u;
    // 0x31f5fc: 0x24c6b400  addiu       $a2, $a2, -0x4C00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x31F5F8u, 0x31F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F600u;
label_31f600:
    // 0x31f600: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x31f600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f604: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31f604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31f608: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31f60c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f614: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x31f614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f61c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31f620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f624: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31f624u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f628: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31F628u;
    SET_GPR_U32(ctx, 31, 0x31F630u);
    ctx->pc = 0x31F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F628u;
    // 0x31f62c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31F628u, 0x31F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F630u;
label_31f630:
    // 0x31f630: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31F630u;
    {
        const bool branch_taken_0x31f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f630) {
            ctx->pc = 0x31F690u;
            goto label_31f690;
        }
    }
    ctx->pc = 0x31F638u;
label_31f638:
    // 0x31f638: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31f638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31f63c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x31f63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x31f640: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31f644: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x31f644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31f648: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x31F648u;
    SET_GPR_U32(ctx, 31, 0x31F650u);
    ctx->pc = 0x31F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F648u;
    // 0x31f64c: 0x24c6b408  addiu       $a2, $a2, -0x4BF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x31F648u, 0x31F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F650u;
label_31f650:
    // 0x31f650: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x31f650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f654: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31f654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31f658: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31f65c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f664: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x31f664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f66c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f66cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f670: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31f670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f674: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31f674u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f678: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31F678u;
    SET_GPR_U32(ctx, 31, 0x31F680u);
    ctx->pc = 0x31F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F678u;
    // 0x31f67c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31F678u, 0x31F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F680u;
label_31f680:
    // 0x31f680: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31F680u;
    {
        const bool branch_taken_0x31f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f680) {
            ctx->pc = 0x31F690u;
            goto label_31f690;
        }
    }
    ctx->pc = 0x31F688u;
label_31f688:
    // 0x31f688: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31F688u;
    SET_GPR_U32(ctx, 31, 0x31F690u);
    ctx->pc = 0x31F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F688u;
    // 0x31f68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31F688u, 0x31F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F690u;
label_31f690:
    // 0x31f690: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x31f690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x31f694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f698: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x31F698u;
    {
        const bool branch_taken_0x31f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F698u;
        // 0x31f69c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f698) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31F6A0u;
label_31f6a0:
    // 0x31f6a0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x31f6a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x31f6a4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x31f6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f6a8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x31f6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x31f6ac: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x31f6acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f6b0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x31f6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f6b4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x31f6b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x31f6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31f6bc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x31f6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_31f6c0:
    // 0x31f6c0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x31f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x31f6c4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x31f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x31f6c8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x31f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f6cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31f6d0: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x31f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x31f6d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31f6d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f6d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31f6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f6dc: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x31F6DCu;
    SET_GPR_U32(ctx, 31, 0x31F6E4u);
    ctx->pc = 0x31F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F6DCu;
    // 0x31f6e0: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x31F6DCu, 0x31F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F6E4u;
label_31f6e4:
    // 0x31f6e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31f6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6ec: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x31f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x31f6f0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x31f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f6f4: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x31f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x31f6f8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x31f6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31f6fc: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x31f6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31f700: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x31f700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f704: 0x27aa00cc  addiu       $t2, $sp, 0xCC
    ctx->pc = 0x31f704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x31f708: 0xc0c0980  jal         func_302600
    ctx->pc = 0x31F708u;
    SET_GPR_U32(ctx, 31, 0x31F710u);
    ctx->pc = 0x31F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F708u;
    // 0x31f70c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x31F708u, 0x31F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F710u;
label_31f710:
    // 0x31f710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F710u;
    {
        const bool branch_taken_0x31f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f710) {
            ctx->pc = 0x31F728u;
            goto label_31f728;
        }
    }
    ctx->pc = 0x31F718u;
    // 0x31f718: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x31f718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f71c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31f71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f720: 0x7e020570  sq          $v0, 0x570($s0)
    ctx->pc = 0x31f720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1392), GPR_VEC(ctx, 2));
    // 0x31f724: 0x0  nop
    ctx->pc = 0x31f724u;
    // NOP
label_31f728:
    // 0x31f728: 0x92070590  lbu         $a3, 0x590($s0)
    ctx->pc = 0x31f728u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x31f72c: 0xc60e058c  lwc1        $f14, 0x58C($s0)
    ctx->pc = 0x31f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31f730: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x31f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x31f734: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f73c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x31f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f740: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x31f740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x31f744: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31f744u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x31f748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f74c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f74cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f750: 0xc0c0928  jal         func_3024A0
    ctx->pc = 0x31F750u;
    SET_GPR_U32(ctx, 31, 0x31F758u);
    ctx->pc = 0x31F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F750u;
    // 0x31f754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x31F750u, 0x31F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F758u;
label_31f758:
    // 0x31f758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F758u;
    {
        const bool branch_taken_0x31f758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F758u;
        // 0x31f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f758) {
            ctx->pc = 0x31F770u;
            goto label_31f770;
        }
    }
    ctx->pc = 0x31F760u;
    // 0x31f760: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31F760u;
    SET_GPR_U32(ctx, 31, 0x31F768u);
    ctx->pc = 0x31F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F760u;
    // 0x31f764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31F760u, 0x31F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F768u;
label_31f768:
    // 0x31f768: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x31F768u;
    {
        const bool branch_taken_0x31f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f768) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31F770u;
label_31f770:
    // 0x31f770: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F770u;
    {
        const bool branch_taken_0x31f770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f770) {
            ctx->pc = 0x31F788u;
            goto label_31f788;
        }
    }
    ctx->pc = 0x31F778u;
    // 0x31f778: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x31f778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x31f77c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f780: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x31F780u;
    {
        const bool branch_taken_0x31f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F780u;
        // 0x31f784: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f780) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31F788u;
label_31f788:
    // 0x31f788: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x31f788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x31f78c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F78Cu;
    {
        const bool branch_taken_0x31f78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F78Cu;
        // 0x31f790: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f78c) {
            ctx->pc = 0x31F7A0u;
            goto label_31f7a0;
        }
    }
    ctx->pc = 0x31F794u;
    // 0x31f794: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31F794u;
    {
        const bool branch_taken_0x31f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f794) {
            ctx->pc = 0x31F820u;
            goto label_31f820;
        }
    }
    ctx->pc = 0x31F79Cu;
    // 0x31f79c: 0x0  nop
    ctx->pc = 0x31f79cu;
    // NOP
label_31f7a0:
    // 0x31f7a0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x31f7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31f7a4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x31f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x31f7a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31f7ac: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x31f7acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f7b0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x31f7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x31f7b4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31F7B4u;
    {
        const bool branch_taken_0x31f7b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31f7b4) {
            ctx->pc = 0x31F7F0u;
            goto label_31f7f0;
        }
    }
    ctx->pc = 0x31F7BCu;
    // 0x31f7bc: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x31f7bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31f7c0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x31f7c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x31f7c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x31F7C4u;
    {
        const bool branch_taken_0x31f7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7C4u;
        // 0x31f7c8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7c4) {
            ctx->pc = 0x31F818u;
            goto label_31f818;
        }
    }
    ctx->pc = 0x31F7CCu;
    // 0x31f7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f7d0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x31f7d0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f7d4: 0x0  nop
    ctx->pc = 0x31f7d4u;
    // NOP
    // 0x31f7d8: 0x0  nop
    ctx->pc = 0x31f7d8u;
    // NOP
    // 0x31f7dc: 0x2010  mfhi        $a0
    ctx->pc = 0x31f7dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x31f7e0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x31f7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f7e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31F7E4u;
    {
        const bool branch_taken_0x31f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E4u;
        // 0x31f7e8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7e4) {
            ctx->pc = 0x31F818u;
            goto label_31f818;
        }
    }
    ctx->pc = 0x31F7ECu;
    // 0x31f7ec: 0x0  nop
    ctx->pc = 0x31f7ecu;
    // NOP
label_31f7f0:
    // 0x31f7f0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x31f7f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31f7f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x31f7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31f7f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F7F8u;
    {
        const bool branch_taken_0x31f7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7f8) {
            ctx->pc = 0x31F818u;
            goto label_31f818;
        }
    }
    ctx->pc = 0x31F800u;
    // 0x31f800: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x31f800u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f808: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x31f808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x31f80c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F80Cu;
    {
        const bool branch_taken_0x31f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F80Cu;
        // 0x31f810: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f80c) {
            ctx->pc = 0x31F820u;
            goto label_31f820;
        }
    }
    ctx->pc = 0x31F814u;
    // 0x31f814: 0x0  nop
    ctx->pc = 0x31f814u;
    // NOP
label_31f818:
    // 0x31f818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f81c: 0x0  nop
    ctx->pc = 0x31f81cu;
    // NOP
label_31f820:
    // 0x31f820: 0x146000e3  bnez        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x31F820u;
    {
        const bool branch_taken_0x31f820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F820u;
        // 0x31f824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f820) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31F828u;
    // 0x31f828: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31F828u;
    SET_GPR_U32(ctx, 31, 0x31F830u);
    ctx->pc = 0x31F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F828u;
    // 0x31f82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31F828u, 0x31F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F830u;
label_31f830:
    // 0x31f830: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x31F830u;
    {
        const bool branch_taken_0x31f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f830) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31F838u;
label_31f838:
    // 0x31f838: 0x10a0005d  beqz        $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x31F838u;
    {
        const bool branch_taken_0x31f838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F838u;
        // 0x31f83c: 0xa2080590  sb          $t0, 0x590($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1424), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f838) {
            ctx->pc = 0x31F9B0u;
            goto label_31f9b0;
        }
    }
    ctx->pc = 0x31F840u;
    // 0x31f840: 0x92040591  lbu         $a0, 0x591($s0)
    ctx->pc = 0x31f840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1425)));
    // 0x31f844: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31f844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31f848: 0x2463ca89  addiu       $v1, $v1, -0x3577
    ctx->pc = 0x31f848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953609));
    // 0x31f84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f850: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31f850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31f854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f858: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31f858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f85c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x31F85Cu;
    {
        const bool branch_taken_0x31f85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31f85c) {
            ctx->pc = 0x31F968u;
            goto label_31f968;
        }
    }
    ctx->pc = 0x31F864u;
    // 0x31f864: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F864u;
    {
        const bool branch_taken_0x31f864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f864) {
            ctx->pc = 0x31F878u;
            goto label_31f878;
        }
    }
    ctx->pc = 0x31F86Cu;
    // 0x31f86c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x31F86Cu;
    {
        const bool branch_taken_0x31f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f86c) {
            ctx->pc = 0x31F9B0u;
            goto label_31f9b0;
        }
    }
    ctx->pc = 0x31F874u;
    // 0x31f874: 0x0  nop
    ctx->pc = 0x31f874u;
    // NOP
label_31f878:
    // 0x31f878: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x31f878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x31f87c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f880: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31f880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f884: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x31f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x31f888: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x31F888u;
    SET_GPR_U32(ctx, 31, 0x31F890u);
    ctx->pc = 0x31F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F888u;
    // 0x31f88c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x31F888u, 0x31F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F890u;
label_31f890:
    // 0x31f890: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31f890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f894: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x31f894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x31f898: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x31f898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x31f89c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x31F89Cu;
    SET_GPR_U32(ctx, 31, 0x31F8A4u);
    ctx->pc = 0x31F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F89Cu;
    // 0x31f8a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x31F89Cu, 0x31F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8A4u;
label_31f8a4:
    // 0x31f8a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x31f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x31f8a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f8ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f8b0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x31F8B0u;
    SET_GPR_U32(ctx, 31, 0x31F8B8u);
    ctx->pc = 0x31F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8B0u;
    // 0x31f8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x31F8B0u, 0x31F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8B8u;
label_31f8b8:
    // 0x31f8b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f8bc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x31f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f8c0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x31F8C0u;
    SET_GPR_U32(ctx, 31, 0x31F8C8u);
    ctx->pc = 0x31F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8C0u;
    // 0x31f8c4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x31F8C0u, 0x31F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8C8u;
label_31f8c8:
    // 0x31f8c8: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x31f8c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x31f8cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f8d0: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x31f8d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f8d4: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x31F8D4u;
    SET_GPR_U32(ctx, 31, 0x31F8DCu);
    ctx->pc = 0x31F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8D4u;
    // 0x31f8d8: 0x26070570  addiu       $a3, $s0, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x31F8D4u, 0x31F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8DCu;
label_31f8dc:
    // 0x31f8dc: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x31f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
    // 0x31f8e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f8e4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x31f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f8e8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x31F8E8u;
    SET_GPR_U32(ctx, 31, 0x31F8F0u);
    ctx->pc = 0x31F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8E8u;
    // 0x31f8ec: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x31F8E8u, 0x31F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8F0u;
label_31f8f0:
    // 0x31f8f0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x31f8f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x31f8f4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31f8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f8f8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x31f8f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f8fc: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x31F8FCu;
    SET_GPR_U32(ctx, 31, 0x31F904u);
    ctx->pc = 0x31F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8FCu;
    // 0x31f900: 0x26070570  addiu       $a3, $s0, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x31F8FCu, 0x31F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F904u;
label_31f904:
    // 0x31f904: 0xae020584  sw          $v0, 0x584($s0)
    ctx->pc = 0x31f904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 2));
    // 0x31f908: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31f908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f90c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x31f90cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31f910: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x31f910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x31f914: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x31f914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x31f918: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x31f918u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f91c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x31F91Cu;
    SET_GPR_U32(ctx, 31, 0x31F924u);
    ctx->pc = 0x31F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F91Cu;
    // 0x31f920: 0x26070570  addiu       $a3, $s0, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x31F91Cu, 0x31F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F924u;
label_31f924:
    // 0x31f924: 0xae020588  sw          $v0, 0x588($s0)
    ctx->pc = 0x31f924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 2));
    // 0x31f928: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31f928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31f92c: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x31f92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f930: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x31f930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x31f934: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31f938: 0x34458402  ori         $a1, $v0, 0x8402
    ctx->pc = 0x31f938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33794);
    // 0x31f93c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f940: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x31f940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f94c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31f94cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31f950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f954: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31F954u;
    SET_GPR_U32(ctx, 31, 0x31F95Cu);
    ctx->pc = 0x31F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F954u;
    // 0x31f958: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31F954u, 0x31F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F95Cu;
label_31f95c:
    // 0x31f95c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31F95Cu;
    {
        const bool branch_taken_0x31f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f95c) {
            ctx->pc = 0x31F9B0u;
            goto label_31f9b0;
        }
    }
    ctx->pc = 0x31F964u;
    // 0x31f964: 0x0  nop
    ctx->pc = 0x31f964u;
    // NOP
label_31f968:
    // 0x31f968: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x31f968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x31f96c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x31f96cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f970: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x31F970u;
    SET_GPR_U32(ctx, 31, 0x31F978u);
    ctx->pc = 0x31F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F970u;
    // 0x31f974: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x31F970u, 0x31F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F978u;
label_31f978:
    // 0x31f978: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x31f978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
    // 0x31f97c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31f980: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x31f980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x31f984: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x31f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x31f988: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31f98c: 0x34458502  ori         $a1, $v0, 0x8502
    ctx->pc = 0x31f98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34050);
    // 0x31f990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f994: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x31f994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31f998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f99c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f99cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31f9a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31f9a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9a8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31F9A8u;
    SET_GPR_U32(ctx, 31, 0x31F9B0u);
    ctx->pc = 0x31F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F9A8u;
    // 0x31f9ac: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31F9A8u, 0x31F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F9B0u;
label_31f9b0:
    // 0x31f9b0: 0x86020528  lh          $v0, 0x528($s0)
    ctx->pc = 0x31f9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x31f9b4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x31f9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f9b8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x31f9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x31f9bc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x31f9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f9c0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x31f9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f9c4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x31f9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x31f9c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31f9cc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x31f9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_31f9d0:
    // 0x31f9d0: 0x8e050580  lw          $a1, 0x580($s0)
    ctx->pc = 0x31f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x31f9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9d8: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x31F9D8u;
    SET_GPR_U32(ctx, 31, 0x31F9E0u);
    ctx->pc = 0x31F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F9D8u;
    // 0x31f9dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x31F9D8u, 0x31F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F9E0u;
label_31f9e0:
    // 0x31f9e0: 0x8e050584  lw          $a1, 0x584($s0)
    ctx->pc = 0x31f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x31f9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f9e8: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x31f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x31f9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9f0: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x31F9F0u;
    SET_GPR_U32(ctx, 31, 0x31F9F8u);
    ctx->pc = 0x31F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F9F0u;
    // 0x31f9f4: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x31F9F0u, 0x31F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F9F8u;
label_31f9f8:
    // 0x31f9f8: 0x8e050588  lw          $a1, 0x588($s0)
    ctx->pc = 0x31f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
    // 0x31f9fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31fa00: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x31fa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x31fa04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa08: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x31FA08u;
    SET_GPR_U32(ctx, 31, 0x31FA10u);
    ctx->pc = 0x31FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA08u;
    // 0x31fa0c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x31FA08u, 0x31FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA10u;
label_31fa10:
    // 0x31fa10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31fa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31fa14: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x31fa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x31fa18: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x31fa18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fa1c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FA1Cu;
    {
        const bool branch_taken_0x31fa1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA1Cu;
        // 0x31fa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa1c) {
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31FA24u;
    // 0x31fa24: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31FA24u;
    SET_GPR_U32(ctx, 31, 0x31FA2Cu);
    ctx->pc = 0x31FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA24u;
    // 0x31fa28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31FA24u, 0x31FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA2Cu;
label_31fa2c:
    // 0x31fa2c: 0x0  nop
    ctx->pc = 0x31fa2cu;
    // NOP
label_31fa30:
    // 0x31fa30: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31fa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31fa34: 0x78285c20  lq          $t0, 0x5C20($at)
    ctx->pc = 0x31fa34u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C20u));
    // 0x31fa38: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31fa3c: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x31fa3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x31fa40: 0x2484ca89  addiu       $a0, $a0, -0x3577
    ctx->pc = 0x31fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953609));
    // 0x31fa44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fa48: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31fa4c: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x31fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x31fa50: 0x78275c30  lq          $a3, 0x5C30($at)
    ctx->pc = 0x31fa50u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C30u));
    // 0x31fa54: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31fa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31fa58: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x31fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x31fa5c: 0x78265c40  lq          $a2, 0x5C40($at)
    ctx->pc = 0x31fa5cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C40u));
    // 0x31fa60: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x31fa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x31fa64: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x31fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x31fa68: 0x78255c50  lq          $a1, 0x5C50($at)
    ctx->pc = 0x31fa68u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C50u));
    // 0x31fa6c: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x31fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x31fa70: 0x7a050020  lq          $a1, 0x20($s0)
    ctx->pc = 0x31fa70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31fa74: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x31fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
    // 0x31fa78: 0x92050591  lbu         $a1, 0x591($s0)
    ctx->pc = 0x31fa78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1425)));
    // 0x31fa7c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x31fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31fa80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31fa84: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x31fa84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fa88: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x31FA88u;
    {
        const bool branch_taken_0x31fa88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31fa88) {
            ctx->pc = 0x31FAD8u;
            goto label_31fad8;
        }
    }
    ctx->pc = 0x31FA90u;
    // 0x31fa90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FA90u;
    {
        const bool branch_taken_0x31fa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa90) {
            ctx->pc = 0x31FAA0u;
            goto label_31faa0;
        }
    }
    ctx->pc = 0x31FA98u;
    // 0x31fa98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31FA98u;
    {
        const bool branch_taken_0x31fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa98) {
            ctx->pc = 0x31FB08u;
            goto label_31fb08;
        }
    }
    ctx->pc = 0x31FAA0u;
label_31faa0:
    // 0x31faa0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x31faa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31faa4: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x31FAA4u;
    {
        const bool branch_taken_0x31faa4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x31FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAA4u;
        // 0x31faa8: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faa4) {
            ctx->pc = 0x31FB08u;
            goto label_31fb08;
        }
    }
    ctx->pc = 0x31FAACu;
    // 0x31faac: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x31FAACu;
    {
        const bool branch_taken_0x31faac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31faac) {
            ctx->pc = 0x31FB08u;
            goto label_31fb08;
        }
    }
    ctx->pc = 0x31FAB4u;
    // 0x31fab4: 0x92060590  lbu         $a2, 0x590($s0)
    ctx->pc = 0x31fab4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x31fab8: 0xc60c058c  lwc1        $f12, 0x58C($s0)
    ctx->pc = 0x31fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31fabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fac0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31fac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31fac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fac8: 0xc0c0900  jal         func_302400
    ctx->pc = 0x31FAC8u;
    SET_GPR_U32(ctx, 31, 0x31FAD0u);
    ctx->pc = 0x31FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAC8u;
    // 0x31facc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x31FAC8u, 0x31FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FAD0u;
label_31fad0:
    // 0x31fad0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31FAD0u;
    {
        const bool branch_taken_0x31fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fad0) {
            ctx->pc = 0x31FB08u;
            goto label_31fb08;
        }
    }
    ctx->pc = 0x31FAD8u;
label_31fad8:
    // 0x31fad8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x31fad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31fadc: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31FADCu;
    {
        const bool branch_taken_0x31fadc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x31FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FADCu;
        // 0x31fae0: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fadc) {
            ctx->pc = 0x31FB08u;
            goto label_31fb08;
        }
    }
    ctx->pc = 0x31FAE4u;
    // 0x31fae4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FAE4u;
    {
        const bool branch_taken_0x31fae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fae4) {
            ctx->pc = 0x31FB08u;
            goto label_31fb08;
        }
    }
    ctx->pc = 0x31FAECu;
    // 0x31faec: 0x92060590  lbu         $a2, 0x590($s0)
    ctx->pc = 0x31faecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x31faf0: 0xc60c058c  lwc1        $f12, 0x58C($s0)
    ctx->pc = 0x31faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31faf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31faf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31faf8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31fafc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31fafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb00: 0xc0c0900  jal         func_302400
    ctx->pc = 0x31FB00u;
    SET_GPR_U32(ctx, 31, 0x31FB08u);
    ctx->pc = 0x31FB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB00u;
    // 0x31fb04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x31FB00u, 0x31FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB08u;
label_31fb08:
    // 0x31fb08: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x31fb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x31fb0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FB0Cu;
    {
        const bool branch_taken_0x31fb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB0Cu;
        // 0x31fb10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb0c) {
            ctx->pc = 0x31FB20u;
            goto label_31fb20;
        }
    }
    ctx->pc = 0x31FB14u;
    // 0x31fb14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31FB14u;
    {
        const bool branch_taken_0x31fb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb14) {
            ctx->pc = 0x31FBA0u;
            goto label_31fba0;
        }
    }
    ctx->pc = 0x31FB1Cu;
    // 0x31fb1c: 0x0  nop
    ctx->pc = 0x31fb1cu;
    // NOP
label_31fb20:
    // 0x31fb20: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x31fb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31fb24: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x31fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x31fb28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31fb2c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x31fb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31fb30: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x31fb34: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31FB34u;
    {
        const bool branch_taken_0x31fb34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31fb34) {
            ctx->pc = 0x31FB70u;
            goto label_31fb70;
        }
    }
    ctx->pc = 0x31FB3Cu;
    // 0x31fb3c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x31fb3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31fb40: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x31fb40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x31fb44: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x31FB44u;
    {
        const bool branch_taken_0x31fb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB44u;
        // 0x31fb48: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb44) {
            ctx->pc = 0x31FB98u;
            goto label_31fb98;
        }
    }
    ctx->pc = 0x31FB4Cu;
    // 0x31fb4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fb50: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x31fb50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31fb54: 0x0  nop
    ctx->pc = 0x31fb54u;
    // NOP
    // 0x31fb58: 0x0  nop
    ctx->pc = 0x31fb58u;
    // NOP
    // 0x31fb5c: 0x2010  mfhi        $a0
    ctx->pc = 0x31fb5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x31fb60: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x31fb60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31fb64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31FB64u;
    {
        const bool branch_taken_0x31fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB64u;
        // 0x31fb68: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb64) {
            ctx->pc = 0x31FB98u;
            goto label_31fb98;
        }
    }
    ctx->pc = 0x31FB6Cu;
    // 0x31fb6c: 0x0  nop
    ctx->pc = 0x31fb6cu;
    // NOP
label_31fb70:
    // 0x31fb70: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x31fb70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x31fb74: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x31fb74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31fb78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31FB78u;
    {
        const bool branch_taken_0x31fb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fb78) {
            ctx->pc = 0x31FB98u;
            goto label_31fb98;
        }
    }
    ctx->pc = 0x31FB80u;
    // 0x31fb80: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x31fb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x31fb84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fb88: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x31fb88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fb8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FB8Cu;
    {
        const bool branch_taken_0x31fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB8Cu;
        // 0x31fb90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb8c) {
            ctx->pc = 0x31FBA0u;
            goto label_31fba0;
        }
    }
    ctx->pc = 0x31FB94u;
    // 0x31fb94: 0x0  nop
    ctx->pc = 0x31fb94u;
    // NOP
label_31fb98:
    // 0x31fb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fb9c: 0x0  nop
    ctx->pc = 0x31fb9cu;
    // NOP
label_31fba0:
    // 0x31fba0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FBA0u;
    {
        const bool branch_taken_0x31fba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBA0u;
        // 0x31fba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fba0) {
            ctx->pc = 0x31FBB0u;
            goto label_31fbb0;
        }
    }
    ctx->pc = 0x31FBA8u;
    // 0x31fba8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x31FBA8u;
    SET_GPR_U32(ctx, 31, 0x31FBB0u);
    ctx->pc = 0x31FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FBA8u;
    // 0x31fbac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x31FBA8u, 0x31FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FBB0u;
label_31fbb0:
    // 0x31fbb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31fbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fbb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31fbb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fbb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31fbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x31FBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBBCu;
        // 0x31fbc0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FBC4u;
}

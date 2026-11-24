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

// Function: sub_00200508
// Address: 0x200508 - 0x200624
void sub_00200508_0x200508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200508_0x200508");
#endif

    switch (ctx->pc) {
        case 0x200558u: goto label_200558;
        case 0x20056cu: goto label_20056c;
        case 0x20057cu: goto label_20057c;
        case 0x200598u: goto label_200598;
        case 0x2005a8u: goto label_2005a8;
        case 0x2005b4u: goto label_2005b4;
        case 0x2005c0u: goto label_2005c0;
        case 0x2005ccu: goto label_2005cc;
        default: break;
    }

    ctx->pc = 0x200508u;

    // 0x200508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20050c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200510: 0x24d3fffc  addiu       $s3, $a2, -0x4
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x200514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20051c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x200520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200524: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x200524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x200528: 0x24b40004  addiu       $s4, $a1, 0x4
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x20052c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200530: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x200530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x200534: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x200534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x200538: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x200538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x20053c: 0x1a600027  blez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x20053Cu;
    {
        const bool branch_taken_0x20053c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x200540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20053Cu;
        // 0x200540: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20053c) {
            ctx->pc = 0x2005DCu;
            goto label_2005dc;
        }
    }
    ctx->pc = 0x200544u;
    // 0x200544: 0x3c170066  lui         $s7, 0x66
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
    // 0x200548: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x200548u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x20054c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x20054cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200550: 0x2928021  addu        $s0, $s4, $s2
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x200554: 0x0  nop
    ctx->pc = 0x200554u;
    // NOP
label_200558:
    // 0x200558: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20055c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200560: 0x26e56338  addiu       $a1, $s7, 0x6338
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 25400));
    // 0x200564: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x200564u;
    SET_GPR_U32(ctx, 31, 0x20056Cu);
    ctx->pc = 0x200568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200564u;
    // 0x200568: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x200564u, 0x20056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20056Cu;
label_20056c:
    // 0x20056c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20056Cu;
    {
        const bool branch_taken_0x20056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20056Cu;
        // 0x200570: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20056c) {
            ctx->pc = 0x200588u;
            goto label_200588;
        }
    }
    ctx->pc = 0x200574u;
    // 0x200574: 0xc0488e8  jal         func_1223A0
    ctx->pc = 0x200574u;
    SET_GPR_U32(ctx, 31, 0x20057Cu);
    ctx->pc = 0x1223A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223A0u, 0x200574u, 0x20057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20057Cu;
label_20057c:
    // 0x20057c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20057cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200580: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x200580u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x200584: 0xae230398  sw          $v1, 0x398($s1)
    ctx->pc = 0x200584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 3));
label_200588:
    // 0x200588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20058c: 0x26c56340  addiu       $a1, $s6, 0x6340
    ctx->pc = 0x20058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x200590: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x200590u;
    SET_GPR_U32(ctx, 31, 0x200598u);
    ctx->pc = 0x200594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200590u;
    // 0x200594: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x200590u, 0x200598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200598u;
label_200598:
    // 0x200598: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x200598u;
    {
        const bool branch_taken_0x200598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200598u;
        // 0x20059c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200598) {
            ctx->pc = 0x2005C4u;
            goto label_2005c4;
        }
    }
    ctx->pc = 0x2005A0u;
    // 0x2005a0: 0xc0488e8  jal         func_1223A0
    ctx->pc = 0x2005A0u;
    SET_GPR_U32(ctx, 31, 0x2005A8u);
    ctx->pc = 0x1223A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223A0u, 0x2005A0u, 0x2005A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005A8u;
label_2005a8:
    // 0x2005a8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2005ac: 0xc0488e8  jal         func_1223A0
    ctx->pc = 0x2005ACu;
    SET_GPR_U32(ctx, 31, 0x2005B4u);
    ctx->pc = 0x2005B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005ACu;
    // 0x2005b0: 0xae220360  sw          $v0, 0x360($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223A0u, 0x2005ACu, 0x2005B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005B4u;
label_2005b4:
    // 0x2005b4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2005b8: 0xc0488e8  jal         func_1223A0
    ctx->pc = 0x2005B8u;
    SET_GPR_U32(ctx, 31, 0x2005C0u);
    ctx->pc = 0x2005BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005B8u;
    // 0x2005bc: 0xae220364  sw          $v0, 0x364($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223A0u, 0x2005B8u, 0x2005C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005C0u;
label_2005c0:
    // 0x2005c0: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x2005c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
label_2005c4:
    // 0x2005c4: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x2005C4u;
    SET_GPR_U32(ctx, 31, 0x2005CCu);
    ctx->pc = 0x2005C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005C4u;
    // 0x2005c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x2005C4u, 0x2005CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005CCu;
label_2005cc:
    // 0x2005cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2005CCu;
    {
        const bool branch_taken_0x2005cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005CCu;
        // 0x2005d0: 0x253182a  slt         $v1, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005cc) {
            ctx->pc = 0x2005DCu;
            goto label_2005dc;
        }
    }
    ctx->pc = 0x2005D4u;
    // 0x2005d4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2005D4u;
    {
        const bool branch_taken_0x2005d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005D4u;
        // 0x2005d8: 0x2928021  addu        $s0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005d4) {
            ctx->pc = 0x200558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200558;
        }
    }
    ctx->pc = 0x2005DCu;
label_2005dc:
    // 0x2005dc: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2005e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2005e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2005e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2005e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2005e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2005ec: 0x38640008  xori        $a0, $v1, 0x8
    ctx->pc = 0x2005ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x2005f0: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x2005f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x2005f4: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2005f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2005f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2005f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2005fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2005fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200600: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x200600u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x200604: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200608: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x200608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20060c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20060cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x200610: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x200610u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200614: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x200614u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x200618: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20061c: 0x3e00008  jr          $ra
    ctx->pc = 0x20061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20061Cu;
        // 0x200620: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20061Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200624u;
}

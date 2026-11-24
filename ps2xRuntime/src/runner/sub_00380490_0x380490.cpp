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

// Function: sub_00380490
// Address: 0x380490 - 0x380574
void sub_00380490_0x380490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380490_0x380490");
#endif

    switch (ctx->pc) {
        case 0x380528u: goto label_380528;
        default: break;
    }

    ctx->pc = 0x380490u;

    // 0x380490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380494: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x380494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x380498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38049c: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x38049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3804a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3804a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3804a4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3804a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3804a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3804a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3804ac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3804acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3804b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3804b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3804b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3804b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3804b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3804b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3804bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3804bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3804c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3804c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3804c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3804C4u;
    {
        const bool branch_taken_0x3804c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3804C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3804C4u;
        // 0x3804c8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3804c4) {
            ctx->pc = 0x3804F0u;
            goto label_3804f0;
        }
    }
    ctx->pc = 0x3804CCu;
    // 0x3804cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3804CCu;
    {
        const bool branch_taken_0x3804cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3804cc) {
            ctx->pc = 0x3804F0u;
            goto label_3804f0;
        }
    }
    ctx->pc = 0x3804D4u;
    // 0x3804d4: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3804D4u;
    {
        const bool branch_taken_0x3804d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x3804d4) {
            ctx->pc = 0x3804F0u;
            goto label_3804f0;
        }
    }
    ctx->pc = 0x3804DCu;
    // 0x3804dc: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3804DCu;
    {
        const bool branch_taken_0x3804dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3804E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3804DCu;
        // 0x3804e0: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3804dc) {
            ctx->pc = 0x3804F0u;
            goto label_3804f0;
        }
    }
    ctx->pc = 0x3804E4u;
    // 0x3804e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3804E4u;
    {
        const bool branch_taken_0x3804e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3804e4) {
            ctx->pc = 0x380560u;
            goto label_380560;
        }
    }
    ctx->pc = 0x3804ECu;
    // 0x3804ec: 0x0  nop
    ctx->pc = 0x3804ecu;
    // NOP
label_3804f0:
    // 0x3804f0: 0x92032b89  lbu         $v1, 0x2B89($s0)
    ctx->pc = 0x3804f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11145)));
    // 0x3804f4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3804f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3804f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3804F8u;
    {
        const bool branch_taken_0x3804f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3804f8) {
            ctx->pc = 0x380520u;
            goto label_380520;
        }
    }
    ctx->pc = 0x380500u;
    // 0x380500: 0x92042b88  lbu         $a0, 0x2B88($s0)
    ctx->pc = 0x380500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x380504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x380504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x380508: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x380508u;
    {
        const bool branch_taken_0x380508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x380508) {
            ctx->pc = 0x380514u;
            goto label_380514;
        }
    }
    ctx->pc = 0x380510u;
    // 0x380510: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x380510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_380514:
    // 0x380514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380514u;
    {
        const bool branch_taken_0x380514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380514u;
        // 0x380518: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380514) {
            ctx->pc = 0x380538u;
            goto label_380538;
        }
    }
    ctx->pc = 0x38051Cu;
    // 0x38051c: 0x0  nop
    ctx->pc = 0x38051cu;
    // NOP
label_380520:
    // 0x380520: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x380520u;
    SET_GPR_U32(ctx, 31, 0x380528u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x380520u, 0x380528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380528u;
label_380528:
    // 0x380528: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x380528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38052c: 0x64630002  daddiu      $v1, $v1, 0x2
    ctx->pc = 0x38052cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2);
    // 0x380530: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x380530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x380534: 0x0  nop
    ctx->pc = 0x380534u;
    // NOP
label_380538:
    // 0x380538: 0x92032b88  lbu         $v1, 0x2B88($s0)
    ctx->pc = 0x380538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x38053c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x38053cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x380540: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x380540u;
    {
        const bool branch_taken_0x380540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x380540) {
            ctx->pc = 0x380558u;
            goto label_380558;
        }
    }
    ctx->pc = 0x380548u;
    // 0x380548: 0x92032b89  lbu         $v1, 0x2B89($s0)
    ctx->pc = 0x380548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11145)));
    // 0x38054c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x380550: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380550u;
    {
        const bool branch_taken_0x380550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380550u;
        // 0x380554: 0xa2032b89  sb          $v1, 0x2B89($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11145), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380550) {
            ctx->pc = 0x380560u;
            goto label_380560;
        }
    }
    ctx->pc = 0x380558u;
label_380558:
    // 0x380558: 0xa2002b89  sb          $zero, 0x2B89($s0)
    ctx->pc = 0x380558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11145), (uint8_t)GPR_U32(ctx, 0));
    // 0x38055c: 0x0  nop
    ctx->pc = 0x38055cu;
    // NOP
label_380560:
    // 0x380560: 0xa2052b88  sb          $a1, 0x2B88($s0)
    ctx->pc = 0x380560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11144), (uint8_t)GPR_U32(ctx, 5));
    // 0x380564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38056c: 0x3e00008  jr          $ra
    ctx->pc = 0x38056Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38056Cu;
        // 0x380570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38056Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380574u;
}

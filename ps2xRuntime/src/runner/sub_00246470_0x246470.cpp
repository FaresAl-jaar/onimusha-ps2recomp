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

// Function: sub_00246470
// Address: 0x246470 - 0x246578
void sub_00246470_0x246470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246470_0x246470");
#endif

    switch (ctx->pc) {
        case 0x24649cu: goto label_24649c;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464e8u: goto label_2464e8;
        case 0x246520u: goto label_246520;
        case 0x246528u: goto label_246528;
        case 0x24653cu: goto label_24653c;
        case 0x246558u: goto label_246558;
        default: break;
    }

    ctx->pc = 0x246470u;

    // 0x246470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246474: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246478: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x246478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24647c: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x24647cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x246480: 0x2664e9bc  addiu       $a0, $s3, -0x1644
    ctx->pc = 0x246480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961596));
    // 0x246484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24648c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x246490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x246490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x246494: 0xc094ece  jal         func_253B38
    ctx->pc = 0x246494u;
    SET_GPR_U32(ctx, 31, 0x24649Cu);
    ctx->pc = 0x246498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246494u;
    // 0x246498: 0x2451e980  addiu       $s1, $v0, -0x1680 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B38u, 0x246494u, 0x24649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24649Cu;
label_24649c:
    // 0x24649c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x24649Cu;
    {
        const bool branch_taken_0x24649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2464A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24649Cu;
        // 0x2464a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24649c) {
            ctx->pc = 0x24655Cu;
            goto label_24655c;
        }
    }
    ctx->pc = 0x2464A4u;
    // 0x2464a4: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x2464a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2464a8: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2464A8u;
    {
        const bool branch_taken_0x2464a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2464ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464A8u;
        // 0x2464ac: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464a8) {
            ctx->pc = 0x2464ECu;
            goto label_2464ec;
        }
    }
    ctx->pc = 0x2464B0u;
    // 0x2464b0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2464b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2464b4: 0x2452e9c0  addiu       $s2, $v0, -0x1640
    ctx->pc = 0x2464b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x2464b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2464b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CE9C0u));
    // 0x2464bc: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2464BCu;
    {
        const bool branch_taken_0x2464bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2464bc) {
            ctx->pc = 0x2464CCu;
            goto label_2464cc;
        }
    }
    ctx->pc = 0x2464C4u;
    // 0x2464c4: 0xc094bc0  jal         func_252F00
    ctx->pc = 0x2464C4u;
    SET_GPR_U32(ctx, 31, 0x2464CCu);
    ctx->pc = 0x252F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F00u, 0x2464C4u, 0x2464CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464CCu;
label_2464cc:
    // 0x2464cc: 0xc09182a  jal         func_2460A8
    ctx->pc = 0x2464CCu;
    SET_GPR_U32(ctx, 31, 0x2464D4u);
    ctx->pc = 0x2464D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464CCu;
    // 0x2464d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2460A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2460A8u, 0x2464CCu, 0x2464D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464D4u;
label_2464d4:
    // 0x2464d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2464d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2464d8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2464D8u;
    {
        const bool branch_taken_0x2464d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2464d8) {
            ctx->pc = 0x2464DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2464D8u;
            // 0x2464dc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2464ECu;
            goto label_2464ec;
        }
    }
    ctx->pc = 0x2464E0u;
    // 0x2464e0: 0xc094bde  jal         func_252F78
    ctx->pc = 0x2464E0u;
    SET_GPR_U32(ctx, 31, 0x2464E8u);
    ctx->pc = 0x252F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F78u, 0x2464E0u, 0x2464E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E8u;
label_2464e8:
    // 0x2464e8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2464e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2464ec:
    // 0x2464ec: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2464ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2464f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2464f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2464f4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2464f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2464f8: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2464F8u;
    {
        const bool branch_taken_0x2464f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2464FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464F8u;
        // 0x2464fc: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464f8) {
            ctx->pc = 0x246540u;
            goto label_246540;
        }
    }
    ctx->pc = 0x246500u;
    // 0x246500: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x246500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246504: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x246504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246508: 0x2470e9c4  addiu       $s0, $v1, -0x163C
    ctx->pc = 0x246508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961604));
    // 0x24650c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24650cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9C4u));
    // 0x246510: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x246510u;
    {
        const bool branch_taken_0x246510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x246510) {
            ctx->pc = 0x246520u;
            goto label_246520;
        }
    }
    ctx->pc = 0x246518u;
    // 0x246518: 0xc094bc0  jal         func_252F00
    ctx->pc = 0x246518u;
    SET_GPR_U32(ctx, 31, 0x246520u);
    ctx->pc = 0x252F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F00u, 0x246518u, 0x246520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246520u;
label_246520:
    // 0x246520: 0xc0918a4  jal         func_246290
    ctx->pc = 0x246520u;
    SET_GPR_U32(ctx, 31, 0x246528u);
    ctx->pc = 0x246524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246520u;
    // 0x246524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246290u, 0x246520u, 0x246528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246528u;
label_246528:
    // 0x246528: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x246528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24652c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24652Cu;
    {
        const bool branch_taken_0x24652c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24652c) {
            ctx->pc = 0x246530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24652Cu;
            // 0x246530: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246540u;
            goto label_246540;
        }
    }
    ctx->pc = 0x246534u;
    // 0x246534: 0xc094bde  jal         func_252F78
    ctx->pc = 0x246534u;
    SET_GPR_U32(ctx, 31, 0x24653Cu);
    ctx->pc = 0x252F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252F78u, 0x246534u, 0x24653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24653Cu;
label_24653c:
    // 0x24653c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_246540:
    // 0x246540: 0x2442e9f8  addiu       $v0, $v0, -0x1608
    ctx->pc = 0x246540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961656));
    // 0x246544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246548: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x246548u;
    {
        const bool branch_taken_0x246548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246548) {
            ctx->pc = 0x24654Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246548u;
            // 0x24654c: 0xae60e9bc  sw          $zero, -0x1644($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294961596), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24655Cu;
            goto label_24655c;
        }
    }
    ctx->pc = 0x246550u;
    // 0x246550: 0xc091752  jal         func_245D48
    ctx->pc = 0x246550u;
    SET_GPR_U32(ctx, 31, 0x246558u);
    ctx->pc = 0x245D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D48u, 0x246550u, 0x246558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246558u;
label_246558:
    // 0x246558: 0xae60e9bc  sw          $zero, -0x1644($s3)
    ctx->pc = 0x246558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294961596), GPR_U32(ctx, 0));
label_24655c:
    // 0x24655c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24655cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x246568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24656c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24656cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246570: 0x3e00008  jr          $ra
    ctx->pc = 0x246570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246570u;
        // 0x246574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246578u;
}

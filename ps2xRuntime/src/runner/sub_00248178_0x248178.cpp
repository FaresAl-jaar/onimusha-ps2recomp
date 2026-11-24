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

// Function: sub_00248178
// Address: 0x248178 - 0x2482f0
void sub_00248178_0x248178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248178_0x248178");
#endif

    switch (ctx->pc) {
        case 0x2481c8u: goto label_2481c8;
        case 0x2481e8u: goto label_2481e8;
        case 0x2481fcu: goto label_2481fc;
        case 0x24821cu: goto label_24821c;
        case 0x24822cu: goto label_24822c;
        case 0x248234u: goto label_248234;
        case 0x24823cu: goto label_24823c;
        case 0x248244u: goto label_248244;
        case 0x248250u: goto label_248250;
        case 0x248268u: goto label_248268;
        case 0x248270u: goto label_248270;
        default: break;
    }

    ctx->pc = 0x248178u;

    // 0x248178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24817c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x248180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24818c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x248190: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x248190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x248194: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x248194u;
    {
        const bool branch_taken_0x248194 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x248198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248194u;
        // 0x248198: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248194) {
            ctx->pc = 0x2481A8u;
            goto label_2481a8;
        }
    }
    ctx->pc = 0x24819Cu;
    // 0x24819c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24819cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2481a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2481A0u;
    {
        const bool branch_taken_0x2481a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481A0u;
        // 0x2481a4: 0x24a5cf00  addiu       $a1, $a1, -0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481a0) {
            ctx->pc = 0x2481E0u;
            goto label_2481e0;
        }
    }
    ctx->pc = 0x2481A8u;
label_2481a8:
    // 0x2481a8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2481A8u;
    {
        const bool branch_taken_0x2481a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481A8u;
        // 0x2481ac: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481a8) {
            ctx->pc = 0x2481C0u;
            goto label_2481c0;
        }
    }
    ctx->pc = 0x2481B0u;
    // 0x2481b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2481b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2481B4u;
    {
        const bool branch_taken_0x2481b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B4u;
        // 0x2481b8: 0x24a5cf28  addiu       $a1, $a1, -0x30D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481b4) {
            ctx->pc = 0x2481E0u;
            goto label_2481e0;
        }
    }
    ctx->pc = 0x2481BCu;
    // 0x2481bc: 0x0  nop
    ctx->pc = 0x2481bcu;
    // NOP
label_2481c0:
    // 0x2481c0: 0xc092048  jal         func_248120
    ctx->pc = 0x2481C0u;
    SET_GPR_U32(ctx, 31, 0x2481C8u);
    ctx->pc = 0x248120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248120u, 0x2481C0u, 0x2481C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481C8u;
label_2481c8:
    // 0x2481c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2481c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481cc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2481CCu;
    {
        const bool branch_taken_0x2481cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2481D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481CCu;
        // 0x2481d0: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481cc) {
            ctx->pc = 0x2481F0u;
            goto label_2481f0;
        }
    }
    ctx->pc = 0x2481D4u;
    // 0x2481d4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2481d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2481d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481dc: 0x24a5cf50  addiu       $a1, $a1, -0x30B0
    ctx->pc = 0x2481dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954832));
label_2481e0:
    // 0x2481e0: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x2481E0u;
    SET_GPR_U32(ctx, 31, 0x2481E8u);
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x2481E0u, 0x2481E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481E8u;
label_2481e8:
    // 0x2481e8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2481E8u;
    {
        const bool branch_taken_0x2481e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481E8u;
        // 0x2481ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481e8) {
            ctx->pc = 0x2482D0u;
            goto label_2482d0;
        }
    }
    ctx->pc = 0x2481F0u;
label_2481f0:
    // 0x2481f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2481f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481f4: 0xc09246a  jal         func_2491A8
    ctx->pc = 0x2481F4u;
    SET_GPR_U32(ctx, 31, 0x2481FCu);
    ctx->pc = 0x2481F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481F4u;
    // 0x2481f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491A8u, 0x2481F4u, 0x2481FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481FCu;
label_2481fc:
    // 0x2481fc: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2481fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x248200: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x248200u;
    {
        const bool branch_taken_0x248200 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x248204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248200u;
        // 0x248204: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248200) {
            ctx->pc = 0x248280u;
            goto label_248280;
        }
    }
    ctx->pc = 0x248208u;
    // 0x248208: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x248208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x24820c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24820cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248210: 0x26100a10  addiu       $s0, $s0, 0xA10
    ctx->pc = 0x248210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2576));
    // 0x248214: 0xc09224e  jal         func_248938
    ctx->pc = 0x248214u;
    SET_GPR_U32(ctx, 31, 0x24821Cu);
    ctx->pc = 0x248218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248214u;
    // 0x248218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x248214u, 0x24821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24821Cu;
label_24821c:
    // 0x24821c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24821cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x248220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248224: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x248224u;
    SET_GPR_U32(ctx, 31, 0x24822Cu);
    ctx->pc = 0x248228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248224u;
    // 0x248228: 0x2484cf80  addiu       $a0, $a0, -0x3080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x248224u, 0x24822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24822Cu;
label_24822c:
    // 0x24822c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24822Cu;
    SET_GPR_U32(ctx, 31, 0x248234u);
    ctx->pc = 0x248230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24822Cu;
    // 0x248230: 0x34048300  ori         $a0, $zero, 0x8300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24822Cu, 0x248234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248234u;
label_248234:
    // 0x248234: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x248234u;
    SET_GPR_U32(ctx, 31, 0x24823Cu);
    ctx->pc = 0x248238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248234u;
    // 0x248238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x248234u, 0x24823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24823Cu;
label_24823c:
    // 0x24823c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24823Cu;
    SET_GPR_U32(ctx, 31, 0x248244u);
    ctx->pc = 0x248240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24823Cu;
    // 0x248240: 0x34048301  ori         $a0, $zero, 0x8301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33537);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24823Cu, 0x248244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248244u;
label_248244:
    // 0x248244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248248: 0xc091f58  jal         func_247D60
    ctx->pc = 0x248248u;
    SET_GPR_U32(ctx, 31, 0x248250u);
    ctx->pc = 0x24824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248248u;
    // 0x24824c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x248248u, 0x248250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248250u;
label_248250:
    // 0x248250: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x248250u;
    {
        const bool branch_taken_0x248250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248250) {
            ctx->pc = 0x248254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248250u;
            // 0x248254: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248278u;
            goto label_248278;
        }
    }
    ctx->pc = 0x248258u;
    // 0x248258: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x248258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24825c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248260: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x248260u;
    SET_GPR_U32(ctx, 31, 0x248268u);
    ctx->pc = 0x248264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248260u;
    // 0x248264: 0x24a5cfa8  addiu       $a1, $a1, -0x3058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x248260u, 0x248268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248268u;
label_248268:
    // 0x248268: 0xc092056  jal         func_248158
    ctx->pc = 0x248268u;
    SET_GPR_U32(ctx, 31, 0x248270u);
    ctx->pc = 0x24826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248268u;
    // 0x24826c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248158u, 0x248268u, 0x248270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248270u;
label_248270:
    // 0x248270: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x248270u;
    {
        const bool branch_taken_0x248270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248270u;
        // 0x248274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248270) {
            ctx->pc = 0x2482D0u;
            goto label_2482d0;
        }
    }
    ctx->pc = 0x248278u;
label_248278:
    // 0x248278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248278u;
    {
        const bool branch_taken_0x248278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248278u;
        // 0x24827c: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248278) {
            ctx->pc = 0x248288u;
            goto label_248288;
        }
    }
    ctx->pc = 0x248280u;
label_248280:
    // 0x248280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248284: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x248284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_248288:
    // 0x248288: 0x24a207ff  addiu       $v0, $a1, 0x7FF
    ctx->pc = 0x248288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x24828c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248290: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x248290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x248294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248298: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x248298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x24829c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x24829cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2482a0: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2482a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x2482a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2482a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2482a8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2482ac: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2482acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2482b0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2482b4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x2482b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2482b8: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2482B8u;
    {
        const bool branch_taken_0x2482b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x2482BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482B8u;
        // 0x2482bc: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482b8) {
            ctx->pc = 0x2482CCu;
            goto label_2482cc;
        }
    }
    ctx->pc = 0x2482C0u;
    // 0x2482c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2482c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2482c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2482c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2482c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2482c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2482cc:
    // 0x2482cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2482ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2482d0:
    // 0x2482d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2482d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2482d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2482d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2482d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2482d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2482dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2482dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2482e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2482e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2482e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2482e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2482e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2482E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2482ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482E8u;
        // 0x2482ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2482F0u;
}

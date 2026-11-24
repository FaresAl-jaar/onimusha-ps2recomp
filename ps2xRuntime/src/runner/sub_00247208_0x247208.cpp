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

// Function: sub_00247208
// Address: 0x247208 - 0x2472f4
void sub_00247208_0x247208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247208_0x247208");
#endif

    switch (ctx->pc) {
        case 0x24722cu: goto label_24722c;
        case 0x247248u: goto label_247248;
        case 0x24728cu: goto label_24728c;
        case 0x2472a8u: goto label_2472a8;
        case 0x2472d4u: goto label_2472d4;
        default: break;
    }

    ctx->pc = 0x247208u;

    // 0x247208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24720c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247210: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247214: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x247214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247218: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x247218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24721c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x247224: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x247224u;
    SET_GPR_U32(ctx, 31, 0x24722Cu);
    ctx->pc = 0x247228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247224u;
    // 0x247228: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x247224u, 0x24722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24722Cu;
label_24722c:
    // 0x24722c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247230: 0x2451ea18  addiu       $s1, $v0, -0x15E8
    ctx->pc = 0x247230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961688));
    // 0x247234: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x247234u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x4CEA18u));
    // 0x247238: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x247238u;
    {
        const bool branch_taken_0x247238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247238u;
        // 0x24723c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247238) {
            ctx->pc = 0x24726Cu;
            goto label_24726c;
        }
    }
    ctx->pc = 0x247240u;
    // 0x247240: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247248:
    // 0x247248: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x247248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24724c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x24724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x247250: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x247250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x247254: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247254u;
    {
        const bool branch_taken_0x247254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247254u;
        // 0x247258: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247254) {
            ctx->pc = 0x24726Cu;
            goto label_24726c;
        }
    }
    ctx->pc = 0x24725Cu;
    // 0x24725c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x247260: 0x0  nop
    ctx->pc = 0x247260u;
    // NOP
    // 0x247264: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x247264u;
    {
        const bool branch_taken_0x247264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247264u;
        // 0x247268: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247264) {
            ctx->pc = 0x247248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247248;
        }
    }
    ctx->pc = 0x24726Cu;
label_24726c:
    // 0x24726c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x24726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x247270: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x247270u;
    {
        const bool branch_taken_0x247270 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x247274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247270u;
        // 0x247274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247270) {
            ctx->pc = 0x247298u;
            goto label_247298;
        }
    }
    ctx->pc = 0x247278u;
    // 0x247278: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x247278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24727c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x247280: 0x2484ccf0  addiu       $a0, $a0, -0x3310
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954224));
    // 0x247284: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x247284u;
    SET_GPR_U32(ctx, 31, 0x24728Cu);
    ctx->pc = 0x247288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247284u;
    // 0x247288: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x247284u, 0x24728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24728Cu;
label_24728c:
    // 0x24728c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24728Cu;
    {
        const bool branch_taken_0x24728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24728Cu;
        // 0x247290: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24728c) {
            ctx->pc = 0x2472CCu;
            goto label_2472cc;
        }
    }
    ctx->pc = 0x247294u;
    // 0x247294: 0x0  nop
    ctx->pc = 0x247294u;
    // NOP
label_247298:
    // 0x247298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24729c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2472a0: 0xc049590  jal         func_125640
    ctx->pc = 0x2472A0u;
    SET_GPR_U32(ctx, 31, 0x2472A8u);
    ctx->pc = 0x2472A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472A0u;
    // 0x2472a4: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2472A0u, 0x2472A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472A8u;
label_2472a8:
    // 0x2472a8: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x2472a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2472ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2472b0: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x2472b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x2472b4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x2472b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x2472b8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x2472b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x2472bc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2472bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2472c0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x2472c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2472c4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2472c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2472c8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2472c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2472cc:
    // 0x2472cc: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x2472CCu;
    SET_GPR_U32(ctx, 31, 0x2472D4u);
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x2472CCu, 0x2472D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472D4u;
label_2472d4:
    // 0x2472d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2472d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2472d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2472dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2472dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2472e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2472e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2472e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2472e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2472e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2472e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2472ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2472ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2472F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472ECu;
        // 0x2472f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2472ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2472F4u;
}

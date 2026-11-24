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

// Function: sub_002491A8
// Address: 0x2491a8 - 0x249284
void sub_002491A8_0x2491a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002491A8_0x2491a8");
#endif

    switch (ctx->pc) {
        case 0x2491d0u: goto label_2491d0;
        case 0x2491f4u: goto label_2491f4;
        case 0x249208u: goto label_249208;
        case 0x24922cu: goto label_24922c;
        case 0x24926cu: goto label_24926c;
        default: break;
    }

    ctx->pc = 0x2491a8u;

    // 0x2491a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2491a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2491ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2491acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2491b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2491b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2491b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2491b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2491b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2491bc: 0x2484d130  addiu       $a0, $a0, -0x2ED0
    ctx->pc = 0x2491bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955312));
    // 0x2491c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2491c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2491c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2491c8: 0xc049e80  jal         func_127A00
    ctx->pc = 0x2491C8u;
    SET_GPR_U32(ctx, 31, 0x2491D0u);
    ctx->pc = 0x2491CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491C8u;
    // 0x2491cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x2491C8u, 0x2491D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491D0u;
label_2491d0:
    // 0x2491d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2491d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2491D4u;
    {
        const bool branch_taken_0x2491d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2491D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491D4u;
        // 0x2491d8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491d4) {
            ctx->pc = 0x249200u;
            goto label_249200;
        }
    }
    ctx->pc = 0x2491DCu;
    // 0x2491dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2491dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2491e0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2491e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2491e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2491e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2491e8: 0x2484d138  addiu       $a0, $a0, -0x2EC8
    ctx->pc = 0x2491e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955320));
    // 0x2491ec: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x2491ECu;
    SET_GPR_U32(ctx, 31, 0x2491F4u);
    ctx->pc = 0x2491F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491ECu;
    // 0x2491f0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x2491ECu, 0x2491F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491F4u;
label_2491f4:
    // 0x2491f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2491F4u;
    {
        const bool branch_taken_0x2491f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491F4u;
        // 0x2491f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491f4) {
            ctx->pc = 0x249270u;
            goto label_249270;
        }
    }
    ctx->pc = 0x2491FCu;
    // 0x2491fc: 0x0  nop
    ctx->pc = 0x2491fcu;
    // NOP
label_249200:
    // 0x249200: 0xc09242a  jal         func_2490A8
    ctx->pc = 0x249200u;
    SET_GPR_U32(ctx, 31, 0x249208u);
    ctx->pc = 0x2490A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490A8u, 0x249200u, 0x249208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249208u;
label_249208:
    // 0x249208: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x249208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24920c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24920cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249210: 0x24630b40  addiu       $v1, $v1, 0xB40
    ctx->pc = 0x249210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2880));
    // 0x249214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249218: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24921c: 0x1447000a  bne         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x24921Cu;
    {
        const bool branch_taken_0x24921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x249220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24921Cu;
        // 0x249220: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24921c) {
            ctx->pc = 0x249248u;
            goto label_249248;
        }
    }
    ctx->pc = 0x249224u;
    // 0x249224: 0xc09243a  jal         func_2490E8
    ctx->pc = 0x249224u;
    SET_GPR_U32(ctx, 31, 0x24922Cu);
    ctx->pc = 0x2490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490E8u, 0x249224u, 0x24922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24922Cu;
label_24922c:
    // 0x24922c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24922cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249230: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x249230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249234: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x249234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249238: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x249238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x24923c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x24923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x249240: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x249240u;
    {
        const bool branch_taken_0x249240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249240u;
        // 0x249244: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249240) {
            ctx->pc = 0x249270u;
            goto label_249270;
        }
    }
    ctx->pc = 0x249248u;
label_249248:
    // 0x249248: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x249248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x24924c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x249250: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249254: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249254u;
    {
        const bool branch_taken_0x249254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249254u;
        // 0x249258: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249254) {
            ctx->pc = 0x24926Cu;
            goto label_24926c;
        }
    }
    ctx->pc = 0x24925Cu;
    // 0x24925c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x24925cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249264: 0xc0923ee  jal         func_248FB8
    ctx->pc = 0x249264u;
    SET_GPR_U32(ctx, 31, 0x24926Cu);
    ctx->pc = 0x249268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249264u;
    // 0x249268: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248FB8u, 0x249264u, 0x24926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24926Cu;
label_24926c:
    // 0x24926c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24926cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249270:
    // 0x249270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249274: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x249274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24927c: 0x3e00008  jr          $ra
    ctx->pc = 0x24927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24927Cu;
        // 0x249280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249284u;
}

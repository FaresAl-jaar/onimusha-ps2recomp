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

// Function: sub_001328E0
// Address: 0x1328e0 - 0x132980
void sub_001328E0_0x1328e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001328E0_0x1328e0");
#endif

    switch (ctx->pc) {
        case 0x1328f8u: goto label_1328f8;
        case 0x132910u: goto label_132910;
        case 0x132920u: goto label_132920;
        case 0x132954u: goto label_132954;
        case 0x13296cu: goto label_13296c;
        default: break;
    }

    ctx->pc = 0x1328e0u;

    // 0x1328e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1328e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1328e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1328e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1328e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1328e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1328ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1328ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1328f0: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x1328F0u;
    SET_GPR_U32(ctx, 31, 0x1328F8u);
    ctx->pc = 0x1328F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328F0u;
    // 0x1328f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x1328F0u, 0x1328F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328F8u;
label_1328f8:
    // 0x1328f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1328f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328fc: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1328FCu;
    {
        const bool branch_taken_0x1328fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1328fc) {
            ctx->pc = 0x132958u;
            goto label_132958;
        }
    }
    ctx->pc = 0x132904u;
    // 0x132904: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x132904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x132908: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x132908u;
    {
        const bool branch_taken_0x132908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132908u;
        // 0x13290c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132908) {
            ctx->pc = 0x132948u;
            goto label_132948;
        }
    }
    ctx->pc = 0x132910u;
label_132910:
    // 0x132910: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x132910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x132914: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x132914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x132918: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x132918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x13291c: 0x0  nop
    ctx->pc = 0x13291cu;
    // NOP
label_132920:
    // 0x132920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x132924: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x132924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x132928: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x132928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13292c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x13292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x132930: 0x0  nop
    ctx->pc = 0x132930u;
    // NOP
    // 0x132934: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x132934u;
    {
        const bool branch_taken_0x132934 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x132934) {
            ctx->pc = 0x132920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132920;
        }
    }
    ctx->pc = 0x13293Cu;
    // 0x13293c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x13293cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x132940: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x132940u;
    {
        const bool branch_taken_0x132940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x132940) {
            ctx->pc = 0x132910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132910;
        }
    }
    ctx->pc = 0x132948u;
label_132948:
    // 0x132948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13294c: 0xc04cedc  jal         func_133B70
    ctx->pc = 0x13294Cu;
    SET_GPR_U32(ctx, 31, 0x132954u);
    ctx->pc = 0x132950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13294Cu;
    // 0x132950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B70u, 0x13294Cu, 0x132954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132954u;
label_132954:
    // 0x132954: 0x0  nop
    ctx->pc = 0x132954u;
    // NOP
label_132958:
    // 0x132958: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x132958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13295c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13295cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x132960: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x132960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x132964: 0xc04cfd4  jal         func_133F50
    ctx->pc = 0x132964u;
    SET_GPR_U32(ctx, 31, 0x13296Cu);
    ctx->pc = 0x132968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132964u;
    // 0x132968: 0x24440930  addiu       $a0, $v0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F50u, 0x132964u, 0x13296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13296Cu;
label_13296c:
    // 0x13296c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13296cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132978: 0x3e00008  jr          $ra
    ctx->pc = 0x132978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132978u;
        // 0x13297c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132980u;
}

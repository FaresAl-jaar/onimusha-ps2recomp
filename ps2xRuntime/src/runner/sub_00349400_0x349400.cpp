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

// Function: sub_00349400
// Address: 0x349400 - 0x349500
void sub_00349400_0x349400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349400_0x349400");
#endif

    switch (ctx->pc) {
        case 0x349418u: goto label_349418;
        case 0x349450u: goto label_349450;
        case 0x349468u: goto label_349468;
        case 0x349474u: goto label_349474;
        case 0x349480u: goto label_349480;
        case 0x34948cu: goto label_34948c;
        default: break;
    }

    ctx->pc = 0x349400u;

    // 0x349400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x349400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x349404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x349404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x349408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34940c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349410: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x349410u;
    SET_GPR_U32(ctx, 31, 0x349418u);
    ctx->pc = 0x349414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349410u;
    // 0x349414: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x349410u, 0x349418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349418u;
label_349418:
    // 0x349418: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x349418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x34941c: 0x34219000  ori         $at, $at, 0x9000
    ctx->pc = 0x34941cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36864);
    // 0x349420: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x349420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x349424: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x349424u;
    {
        const bool branch_taken_0x349424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x349424) {
            ctx->pc = 0x349440u;
            goto label_349440;
        }
    }
    ctx->pc = 0x34942Cu;
    // 0x34942c: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x34942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349434: 0xac600148  sw          $zero, 0x148($v1)
    ctx->pc = 0x349434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 0));
    // 0x349438: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x349438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34943c: 0xac64014c  sw          $a0, 0x14C($v1)
    ctx->pc = 0x34943cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 4));
label_349440:
    // 0x349440: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x349440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349444: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x349444u;
    {
        const bool branch_taken_0x349444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349444u;
        // 0x349448: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349444) {
            ctx->pc = 0x3494C0u;
            goto label_3494c0;
        }
    }
    ctx->pc = 0x34944Cu;
    // 0x34944c: 0x0  nop
    ctx->pc = 0x34944cu;
    // NOP
label_349450:
    // 0x349450: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x349450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349454: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x349454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x349458: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x349458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x34945c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x349460: 0xa462003c  sh          $v0, 0x3C($v1)
    ctx->pc = 0x349460u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x349464: 0x0  nop
    ctx->pc = 0x349464u;
    // NOP
label_349468:
    // 0x349468: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x349468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34946c: 0xc0d24b8  jal         func_3492E0
    ctx->pc = 0x34946Cu;
    SET_GPR_U32(ctx, 31, 0x349474u);
    ctx->pc = 0x349470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34946Cu;
    // 0x349470: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3492E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492E0u, 0x34946Cu, 0x349474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349474u;
label_349474:
    // 0x349474: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x349474u;
    {
        const bool branch_taken_0x349474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349474) {
            ctx->pc = 0x349450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349450;
        }
    }
    ctx->pc = 0x34947Cu;
    // 0x34947c: 0x0  nop
    ctx->pc = 0x34947cu;
    // NOP
label_349480:
    // 0x349480: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x349480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349484: 0xc0d24e8  jal         func_3493A0
    ctx->pc = 0x349484u;
    SET_GPR_U32(ctx, 31, 0x34948Cu);
    ctx->pc = 0x349488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349484u;
    // 0x349488: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3493A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493A0u, 0x349484u, 0x34948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34948Cu;
label_34948c:
    // 0x34948c: 0x0  nop
    ctx->pc = 0x34948cu;
    // NOP
    // 0x349490: 0x0  nop
    ctx->pc = 0x349490u;
    // NOP
    // 0x349494: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x349494u;
    {
        const bool branch_taken_0x349494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349494) {
            ctx->pc = 0x349480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349480;
        }
    }
    ctx->pc = 0x34949Cu;
    // 0x34949c: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x34949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3494a0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3494a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3494a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3494a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3494a8: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x3494a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3494ac: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x3494acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3494b0: 0x26310064  addiu       $s1, $s1, 0x64
    ctx->pc = 0x3494b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x3494b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3494b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3494b8: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x3494b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x3494bc: 0x0  nop
    ctx->pc = 0x3494bcu;
    // NOP
label_3494c0:
    // 0x3494c0: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x3494c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3494c4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3494C4u;
    {
        const bool branch_taken_0x3494c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3494C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494C4u;
        // 0x3494c8: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494c4) {
            ctx->pc = 0x3494E8u;
            goto label_3494e8;
        }
    }
    ctx->pc = 0x3494CCu;
    // 0x3494cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3494ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3494d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3494d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3494d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3494d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3494d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3494d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3494dc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x3494DCu;
    {
        const bool branch_taken_0x3494dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3494E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494DCu;
        // 0x3494e0: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494dc) {
            ctx->pc = 0x349468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349468;
        }
    }
    ctx->pc = 0x3494E4u;
    // 0x3494e4: 0x0  nop
    ctx->pc = 0x3494e4u;
    // NOP
label_3494e8:
    // 0x3494e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3494e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3494ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3494ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3494f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3494f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3494f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3494f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3494f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3494F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3494FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494F8u;
        // 0x3494fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349500u;
}

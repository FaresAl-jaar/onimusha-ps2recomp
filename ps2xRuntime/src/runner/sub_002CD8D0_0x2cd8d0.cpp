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

// Function: sub_002CD8D0
// Address: 0x2cd8d0 - 0x2cda24
void sub_002CD8D0_0x2cd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD8D0_0x2cd8d0");
#endif

    switch (ctx->pc) {
        case 0x2cd904u: goto label_2cd904;
        case 0x2cd91cu: goto label_2cd91c;
        case 0x2cd924u: goto label_2cd924;
        case 0x2cd940u: goto label_2cd940;
        case 0x2cd950u: goto label_2cd950;
        case 0x2cd990u: goto label_2cd990;
        default: break;
    }

    ctx->pc = 0x2cd8d0u;

    // 0x2cd8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd8d8: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x2cd8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x2cd8dc: 0xaf808a10  sw          $zero, -0x75F0($gp)
    ctx->pc = 0x2cd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 0));
    // 0x2cd8e0: 0xaf808a04  sw          $zero, -0x75FC($gp)
    ctx->pc = 0x2cd8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), GPR_U32(ctx, 0));
    // 0x2cd8e4: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x2cd8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    // 0x2cd8e8: 0xaf808a0c  sw          $zero, -0x75F4($gp)
    ctx->pc = 0x2cd8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
    // 0x2cd8ec: 0xaf808a14  sw          $zero, -0x75EC($gp)
    ctx->pc = 0x2cd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), GPR_U32(ctx, 0));
    // 0x2cd8f0: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x2cd8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x2cd8f4: 0xa3808aa4  sb          $zero, -0x755C($gp)
    ctx->pc = 0x2cd8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937252), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd8f8: 0xa3808aa8  sb          $zero, -0x7558($gp)
    ctx->pc = 0x2cd8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd8fc: 0xc0a7254  jal         func_29C950
    ctx->pc = 0x2CD8FCu;
    SET_GPR_U32(ctx, 31, 0x2CD904u);
    ctx->pc = 0x2CD900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8FCu;
    // 0x2cd900: 0xaf808a20  sw          $zero, -0x75E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C950u, 0x2CD8FCu, 0x2CD904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD904u;
label_2cd904:
    // 0x2cd904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd908: 0xa3808aa0  sb          $zero, -0x7560($gp)
    ctx->pc = 0x2cd908u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937248), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd90c: 0xa3828a9c  sb          $v0, -0x7564($gp)
    ctx->pc = 0x2cd90cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937244), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd910: 0xa3828a94  sb          $v0, -0x756C($gp)
    ctx->pc = 0x2cd910u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937236), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd914: 0xc0b2e18  jal         func_2CB860
    ctx->pc = 0x2CD914u;
    SET_GPR_U32(ctx, 31, 0x2CD91Cu);
    ctx->pc = 0x2CD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD914u;
    // 0x2cd918: 0xa3828a98  sb          $v0, -0x7568($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937240), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB860u, 0x2CD914u, 0x2CD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD91Cu;
label_2cd91c:
    // 0x2cd91c: 0xc0b2cb8  jal         func_2CB2E0
    ctx->pc = 0x2CD91Cu;
    SET_GPR_U32(ctx, 31, 0x2CD924u);
    ctx->pc = 0x2CD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD91Cu;
    // 0x2cd920: 0xa3808a24  sb          $zero, -0x75DC($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937124), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB2E0u, 0x2CD91Cu, 0x2CD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD924u;
label_2cd924:
    // 0x2cd924: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cd928: 0xa3808a80  sb          $zero, -0x7580($gp)
    ctx->pc = 0x2cd928u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd92c: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x2cd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x2cd930: 0xa3808a84  sb          $zero, -0x757C($gp)
    ctx->pc = 0x2cd930u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937220), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd934: 0xa3808a88  sb          $zero, -0x7578($gp)
    ctx->pc = 0x2cd934u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937224), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd938: 0xc0b34dc  jal         func_2CD370
    ctx->pc = 0x2CD938u;
    SET_GPR_U32(ctx, 31, 0x2CD940u);
    ctx->pc = 0x2CD93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD938u;
    // 0x2cd93c: 0xa3808a8c  sb          $zero, -0x7574($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937228), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD370u, 0x2CD938u, 0x2CD940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD940u;
label_2cd940:
    // 0x2cd940: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cd944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd948: 0x24846bd0  addiu       $a0, $a0, 0x6BD0
    ctx->pc = 0x2cd948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27600));
    // 0x2cd94c: 0x0  nop
    ctx->pc = 0x2cd94cu;
    // NOP
label_2cd950:
    // 0x2cd950: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2cd950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd954: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2cd954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd958: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2cd958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2cd95c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2cd95cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd960: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x2cd960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2cd964: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2cd964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd968: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2cd968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd96c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2cd96cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd970: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2cd970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd974: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x2cd974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd978: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CD978u;
    {
        const bool branch_taken_0x2cd978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD978u;
        // 0x2cd97c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd978) {
            ctx->pc = 0x2CD950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd950;
        }
    }
    ctx->pc = 0x2CD980u;
    // 0x2cd980: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cd984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd988: 0x24846ad0  addiu       $a0, $a0, 0x6AD0
    ctx->pc = 0x2cd988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27344));
    // 0x2cd98c: 0x0  nop
    ctx->pc = 0x2cd98cu;
    // NOP
label_2cd990:
    // 0x2cd990: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2cd990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd994: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2cd994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd998: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2cd998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2cd99c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2cd99cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9a0: 0x28c300f7  slti        $v1, $a2, 0xF7
    ctx->pc = 0x2cd9a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)247) ? 1 : 0);
    // 0x2cd9a4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2cd9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9a8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2cd9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9ac: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2cd9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9b0: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2cd9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9b4: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x2cd9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9b8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CD9B8u;
    {
        const bool branch_taken_0x2cd9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B8u;
        // 0x2cd9bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b8) {
            ctx->pc = 0x2CD990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd990;
        }
    }
    ctx->pc = 0x2CD9C0u;
    // 0x2cd9c0: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x2cd9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x2cd9c4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2cd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cd9c8: 0x24a56ad0  addiu       $a1, $a1, 0x6AD0
    ctx->pc = 0x2cd9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27344));
    // 0x2cd9cc: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cd9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cd9d0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2cd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2cd9d4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2cd9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9d8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x2cd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2cd9dc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2cd9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cd9e4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2cd9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9e8: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x2cd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2cd9ec: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cd9f0: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2cd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2cd9f4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2cd9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd9f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cd9fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2cd9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cda00: 0x24c30005  addiu       $v1, $a2, 0x5
    ctx->pc = 0x2cda00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2cda04: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2cda04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cda08: 0x24c30006  addiu       $v1, $a2, 0x6
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2cda0c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2cda0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cda10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cda10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cda14: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2cda14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cda18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cda18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA1Cu;
        // 0x2cda20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA24u;
}

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

// Function: sub_002BC330
// Address: 0x2bc330 - 0x2bc390
void sub_002BC330_0x2bc330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC330_0x2bc330");
#endif

    ctx->pc = 0x2bc330u;

    // 0x2bc330: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2bc330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bc334: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC334u;
    {
        const bool branch_taken_0x2bc334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc334) {
            ctx->pc = 0x2BC350u;
            goto label_2bc350;
        }
    }
    ctx->pc = 0x2BC33Cu;
    // 0x2bc33c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc340: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bc340u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bc344: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bc344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc348: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC348u;
    {
        const bool branch_taken_0x2bc348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc348) {
            ctx->pc = 0x2BC360u;
            goto label_2bc360;
        }
    }
    ctx->pc = 0x2BC350u;
label_2bc350:
    // 0x2bc350: 0xdca30508  ld          $v1, 0x508($a1)
    ctx->pc = 0x2bc350u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1288)));
    // 0x2bc354: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2bc354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2bc358: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BC358u;
    {
        const bool branch_taken_0x2bc358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC358u;
        // 0x2bc35c: 0xfca30508  sd          $v1, 0x508($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 1288), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc358) {
            ctx->pc = 0x2BC388u;
            goto label_2bc388;
        }
    }
    ctx->pc = 0x2BC360u;
label_2bc360:
    // 0x2bc360: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc364: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2bc364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2bc368: 0xfca30500  sd          $v1, 0x500($a1)
    ctx->pc = 0x2bc368u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
    // 0x2bc36c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2bc36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc370: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2bc370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc374: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2bc374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc378: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bc378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bc37c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bc37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bc380: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bc380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bc384: 0x0  nop
    ctx->pc = 0x2bc384u;
    // NOP
label_2bc388:
    // 0x2bc388: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC390u;
}

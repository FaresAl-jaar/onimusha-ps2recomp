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

// Function: sub_002BA710
// Address: 0x2ba710 - 0x2ba798
void sub_002BA710_0x2ba710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA710_0x2ba710");
#endif

    ctx->pc = 0x2ba710u;

    // 0x2ba710: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2ba710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2ba714: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA714u;
    {
        const bool branch_taken_0x2ba714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba714) {
            ctx->pc = 0x2BA730u;
            goto label_2ba730;
        }
    }
    ctx->pc = 0x2BA71Cu;
    // 0x2ba71c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ba71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ba720: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2ba720u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ba724: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ba724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba728: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BA728u;
    {
        const bool branch_taken_0x2ba728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba728) {
            ctx->pc = 0x2BA778u;
            goto label_2ba778;
        }
    }
    ctx->pc = 0x2BA730u;
label_2ba730:
    // 0x2ba730: 0x90830046  lbu         $v1, 0x46($a0)
    ctx->pc = 0x2ba730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x2ba734: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2ba734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ba738: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA738u;
    {
        const bool branch_taken_0x2ba738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba738) {
            ctx->pc = 0x2BA750u;
            goto label_2ba750;
        }
    }
    ctx->pc = 0x2BA740u;
    // 0x2ba740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ba744: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BA744u;
    {
        const bool branch_taken_0x2ba744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA744u;
        // 0x2ba748: 0xa0830046  sb          $v1, 0x46($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba744) {
            ctx->pc = 0x2BA770u;
            goto label_2ba770;
        }
    }
    ctx->pc = 0x2BA74Cu;
    // 0x2ba74c: 0x0  nop
    ctx->pc = 0x2ba74cu;
    // NOP
label_2ba750:
    // 0x2ba750: 0x8ca306ac  lw          $v1, 0x6AC($a1)
    ctx->pc = 0x2ba750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
    // 0x2ba754: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2ba754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2ba758: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA758u;
    {
        const bool branch_taken_0x2ba758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba758) {
            ctx->pc = 0x2BA778u;
            goto label_2ba778;
        }
    }
    ctx->pc = 0x2BA760u;
    // 0x2ba760: 0x94830020  lhu         $v1, 0x20($a0)
    ctx->pc = 0x2ba760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ba764: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2ba764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2ba768: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA768u;
    {
        const bool branch_taken_0x2ba768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba768) {
            ctx->pc = 0x2BA778u;
            goto label_2ba778;
        }
    }
    ctx->pc = 0x2BA770u;
label_2ba770:
    // 0x2ba770: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA770u;
    {
        const bool branch_taken_0x2ba770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba770) {
            ctx->pc = 0x2BA790u;
            goto label_2ba790;
        }
    }
    ctx->pc = 0x2BA778u;
label_2ba778:
    // 0x2ba778: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2ba778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba77c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2ba77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba780: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2ba780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba784: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2ba784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2ba788: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2ba788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2ba78c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2ba78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2ba790:
    // 0x2ba790: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA798u;
}

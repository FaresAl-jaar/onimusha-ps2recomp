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

// Function: sub_003378A0
// Address: 0x3378a0 - 0x337990
void sub_003378A0_0x3378a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003378A0_0x3378a0");
#endif

    ctx->pc = 0x3378a0u;

    // 0x3378a0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x3378a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3378a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3378a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3378a8: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3378A8u;
    {
        const bool branch_taken_0x3378a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3378a8) {
            ctx->pc = 0x337988u;
            goto label_337988;
        }
    }
    ctx->pc = 0x3378B0u;
    // 0x3378b0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x3378b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3378b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3378B4u;
    {
        const bool branch_taken_0x3378b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3378b4) {
            ctx->pc = 0x3378C8u;
            goto label_3378c8;
        }
    }
    ctx->pc = 0x3378BCu;
    // 0x3378bc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x3378bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3378c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3378C0u;
    {
        const bool branch_taken_0x3378c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3378C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378C0u;
        // 0x3378c4: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3378c0) {
            ctx->pc = 0x337988u;
            goto label_337988;
        }
    }
    ctx->pc = 0x3378C8u;
label_3378c8:
    // 0x3378c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3378c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3378cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3378ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3378d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3378d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3378d4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3378d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3378d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3378D8u;
    {
        const bool branch_taken_0x3378d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378d8) {
            ctx->pc = 0x3378E8u;
            goto label_3378e8;
        }
    }
    ctx->pc = 0x3378E0u;
    // 0x3378e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3378E0u;
    {
        const bool branch_taken_0x3378e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3378E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378E0u;
        // 0x3378e4: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3378e0) {
            ctx->pc = 0x3378FCu;
            goto label_3378fc;
        }
    }
    ctx->pc = 0x3378E8u;
label_3378e8:
    // 0x3378e8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3378E8u;
    {
        const bool branch_taken_0x3378e8 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3378e8) {
            ctx->pc = 0x3378F4u;
            goto label_3378f4;
        }
    }
    ctx->pc = 0x3378F0u;
    // 0x3378f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3378f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3378f4:
    // 0x3378f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3378f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378f8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x3378f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_3378fc:
    // 0x3378fc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x3378fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337900: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x337900u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337904: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x337904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x337908: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x337908u;
    {
        const bool branch_taken_0x337908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337908) {
            ctx->pc = 0x337918u;
            goto label_337918;
        }
    }
    ctx->pc = 0x337910u;
    // 0x337910: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x337910u;
    {
        const bool branch_taken_0x337910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337910u;
        // 0x337914: 0xa4860004  sh          $a2, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337910) {
            ctx->pc = 0x337950u;
            goto label_337950;
        }
    }
    ctx->pc = 0x337918u;
label_337918:
    // 0x337918: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x337918u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x33791c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x337920: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x337920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x337924: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x337924u;
    {
        const bool branch_taken_0x337924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337924) {
            ctx->pc = 0x337950u;
            goto label_337950;
        }
    }
    ctx->pc = 0x33792Cu;
    // 0x33792c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x33792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x337930: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x337930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x337934: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337934u;
    {
        const bool branch_taken_0x337934 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337934) {
            ctx->pc = 0x337944u;
            goto label_337944;
        }
    }
    ctx->pc = 0x33793Cu;
    // 0x33793c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33793Cu;
    {
        const bool branch_taken_0x33793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33793Cu;
        // 0x337940: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33793c) {
            ctx->pc = 0x33794Cu;
            goto label_33794c;
        }
    }
    ctx->pc = 0x337944u;
label_337944:
    // 0x337944: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x337944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337948: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x337948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_33794c:
    // 0x33794c: 0x0  nop
    ctx->pc = 0x33794cu;
    // NOP
label_337950:
    // 0x337950: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x337950u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x337954: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x337954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337958: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x337958u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33795c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x337960: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x337960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x337964: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x337964u;
    {
        const bool branch_taken_0x337964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337964u;
        // 0x337968: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337964) {
            ctx->pc = 0x337988u;
            goto label_337988;
        }
    }
    ctx->pc = 0x33796Cu;
    // 0x33796c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33796Cu;
    {
        const bool branch_taken_0x33796c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x33796c) {
            ctx->pc = 0x33797Cu;
            goto label_33797c;
        }
    }
    ctx->pc = 0x337974u;
    // 0x337974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337974u;
    {
        const bool branch_taken_0x337974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337974u;
        // 0x337978: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337974) {
            ctx->pc = 0x337984u;
            goto label_337984;
        }
    }
    ctx->pc = 0x33797Cu;
label_33797c:
    // 0x33797c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33797cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337980: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x337980u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_337984:
    // 0x337984: 0x0  nop
    ctx->pc = 0x337984u;
    // NOP
label_337988:
    // 0x337988: 0x3e00008  jr          $ra
    ctx->pc = 0x337988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337990u;
}

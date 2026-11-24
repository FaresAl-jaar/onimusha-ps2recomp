#include <cstring>
#include <cstdio>
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

// Function: sub_00247B98
// Address: 0x247b98 - 0x247ca0
void sub_00247B98_0x247b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247B98_0x247b98");
#endif
    { static uint32_t n=0; ++n; const uint32_t cmd=GPR_U32(ctx,4), argp=GPR_U32(ctx,5), nargs=GPR_U32(ctx,6); if (n<=60000) { uint32_t a[4]={0,0,0,0}; for (uint32_t i=0;i<4&&i<nargs;++i) std::memcpy(&a[i], rdram+((argp+i*4)&0x1ffffffu), 4); fprintf(stderr,"[rnarpc] n=%u cmd=0x%x nargs=%u a=%x,%x,%x,%x ra=0x%x\n", n, cmd, nargs, a[0],a[1],a[2],a[3], GPR_U32(ctx,31)); } }

    switch (ctx->pc) {
        case 0x247bd0u: goto label_247bd0;
        case 0x247be0u: goto label_247be0;
        case 0x247c40u: goto label_247c40;
        case 0x247c50u: goto label_247c50;
        case 0x247c78u: goto label_247c78;
        default: break;
    }

    ctx->pc = 0x247b98u;

    // 0x247b98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x247b9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x247b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x247ba0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x247ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ba4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x247ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x247ba8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x247ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x247bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x247bb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x247bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bb4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x247bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x247bb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x247bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bbc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x247bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x247bc0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x247bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x247bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x247bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x247bc8: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x247BC8u;
    SET_GPR_U32(ctx, 31, 0x247BD0u);
    ctx->pc = 0x247BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BC8u;
    // 0x247bcc: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x247BC8u, 0x247BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BD0u;
label_247bd0:
    // 0x247bd0: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x247BD0u;
    {
        const bool branch_taken_0x247bd0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x247BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BD0u;
        // 0x247bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bd0) {
            ctx->pc = 0x247C08u;
            goto label_247c08;
        }
    }
    ctx->pc = 0x247BD8u;
    // 0x247bd8: 0x3c070088  lui         $a3, 0x88
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)136 << 16));
    // 0x247bdc: 0x24e86280  addiu       $t0, $a3, 0x6280
    ctx->pc = 0x247bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_247be0:
    // 0x247be0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x247be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x247be4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x247be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x247be8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x247be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x247bec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x247becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x247bf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x247bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247bf4: 0xd0282a  slt         $a1, $a2, $s0
    ctx->pc = 0x247bf4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x247bf8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247BF8u;
    {
        const bool branch_taken_0x247bf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x247BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BF8u;
        // 0x247bfc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bf8) {
            ctx->pc = 0x247BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247be0;
        }
    }
    ctx->pc = 0x247C00u;
    // 0x247c00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247C00u;
    {
        const bool branch_taken_0x247c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C00u;
        // 0x247c04: 0x3c150088  lui         $s5, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c00) {
            ctx->pc = 0x247C10u;
            goto label_247c10;
        }
    }
    ctx->pc = 0x247C08u;
label_247c08:
    // 0x247c08: 0x3c070088  lui         $a3, 0x88
    ctx->pc = 0x247c08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)136 << 16));
    // 0x247c0c: 0x3c150088  lui         $s5, 0x88
    ctx->pc = 0x247c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)136 << 16));
label_247c10:
    // 0x247c10: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x247c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x247c14: 0x26b26380  addiu       $s2, $s5, 0x6380
    ctx->pc = 0x247c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 25472));
    // 0x247c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c1c: 0x2484fac0  addiu       $a0, $a0, -0x540
    ctx->pc = 0x247c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965952));
    // 0x247c20: 0x26650400  addiu       $a1, $s3, 0x400
    ctx->pc = 0x247c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x247c24: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x247c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x247c28: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x247c28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x247c2c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x247c2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c30: 0x115080  sll         $t2, $s1, 2
    ctx->pc = 0x247c30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x247c34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x247c34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c38: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x247C38u;
    SET_GPR_U32(ctx, 31, 0x247C40u);
    ctx->pc = 0x247C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C38u;
    // 0x247c3c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x247C38u, 0x247C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C40u;
label_247c40:
    // 0x247c40: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x247C40u;
    {
        const bool branch_taken_0x247c40 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x247C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C40u;
        // 0x247c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c40) {
            ctx->pc = 0x247C70u;
            goto label_247c70;
        }
    }
    ctx->pc = 0x247C48u;
    // 0x247c48: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x247c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c4c: 0x0  nop
    ctx->pc = 0x247c4cu;
    // NOP
label_247c50:
    // 0x247c50: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x247c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x247c54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x247c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x247c58: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x247c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x247c5c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x247c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x247c60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x247c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247c64: 0xd1282a  slt         $a1, $a2, $s1
    ctx->pc = 0x247c64u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x247c68: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247C68u;
    {
        const bool branch_taken_0x247c68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x247C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C68u;
        // 0x247c6c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c68) {
            ctx->pc = 0x247C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247c50;
        }
    }
    ctx->pc = 0x247C70u;
label_247c70:
    // 0x247c70: 0xc094bae  jal         func_252EB8
    ctx->pc = 0x247C70u;
    SET_GPR_U32(ctx, 31, 0x247C78u);
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x247C70u, 0x247C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C78u;
label_247c78:
    // 0x247c78: 0x8ea26380  lw          $v0, 0x6380($s5)
    ctx->pc = 0x247c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 25472)));
    // 0x247c7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x247c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x247c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247c84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x247c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247c88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x247c88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c8c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x247c8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247c90: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x247c90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x247c94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x247c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247c98: 0x3e00008  jr          $ra
    ctx->pc = 0x247C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C98u;
        // 0x247c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247CA0u;
}

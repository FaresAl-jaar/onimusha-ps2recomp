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

// Function: sub_001F5328
// Address: 0x1f5328 - 0x1f53e0
void sub_001F5328_0x1f5328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5328_0x1f5328");
#endif

    switch (ctx->pc) {
        case 0x1f534cu: goto label_1f534c;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f5390u: goto label_1f5390;
        case 0x1f53b4u: goto label_1f53b4;
        default: break;
    }

    ctx->pc = 0x1f5328u;

    // 0x1f5328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f532c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5330: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5334: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f533c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5340: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5344: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F5344u;
    SET_GPR_U32(ctx, 31, 0x1F534Cu);
    ctx->pc = 0x1F5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5344u;
    // 0x1f5348: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F5344u, 0x1F534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F534Cu;
label_1f534c:
    // 0x1f534c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F534Cu;
    {
        const bool branch_taken_0x1f534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F534Cu;
        // 0x1f5350: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f534c) {
            ctx->pc = 0x1F5378u;
            goto label_1f5378;
        }
    }
    ctx->pc = 0x1F5354u;
    // 0x1f5354: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f5354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f5358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f535c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5364: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x1f5364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
    // 0x1f5368: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f5368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f536c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5370: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F5370u;
    ctx->pc = 0x1F5374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5370u;
    // 0x1f5374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5378u;
label_1f5378:
    // 0x1f5378: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x1f5378u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
    // 0x1f537c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1f537cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5380: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x1f5380u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
    // 0x1f5384: 0x0  nop
    ctx->pc = 0x1f5384u;
    // NOP
label_1f5388:
    // 0x1f5388: 0xc0801b4  jal         func_2006D0
    ctx->pc = 0x1F5388u;
    SET_GPR_U32(ctx, 31, 0x1F5390u);
    ctx->pc = 0x1F538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5388u;
    // 0x1f538c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006D0u, 0x1F5388u, 0x1F5390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5390u;
label_1f5390:
    // 0x1f5390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5398: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f5398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f539c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F539Cu;
    {
        const bool branch_taken_0x1f539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F539Cu;
        // 0x1f53a0: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f539c) {
            ctx->pc = 0x1F53BCu;
            goto label_1f53bc;
        }
    }
    ctx->pc = 0x1F53A4u;
    // 0x1f53a4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F53A4u;
    {
        const bool branch_taken_0x1f53a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f53a4) {
            ctx->pc = 0x1F53A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F53A4u;
            // 0x1f53a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F53BCu;
            goto label_1f53bc;
        }
    }
    ctx->pc = 0x1F53ACu;
    // 0x1f53ac: 0xc08023e  jal         func_2008F8
    ctx->pc = 0x1F53ACu;
    SET_GPR_U32(ctx, 31, 0x1F53B4u);
    ctx->pc = 0x2008F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008F8u, 0x1F53ACu, 0x1F53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53B4u;
label_1f53b4:
    // 0x1f53b4: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F53B4u;
    {
        const bool branch_taken_0x1f53b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1f53b4) {
            ctx->pc = 0x1F5388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5388;
        }
    }
    ctx->pc = 0x1F53BCu;
label_1f53bc:
    // 0x1f53bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f53bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f53c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f53c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f53c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f53c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f53cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f53ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f53d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f53d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f53d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f53d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f53d8: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F53D8u;
    ctx->pc = 0x1F53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53D8u;
    // 0x1f53dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F53E0u;
}

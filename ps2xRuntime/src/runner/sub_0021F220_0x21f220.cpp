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

// Function: sub_0021F220
// Address: 0x21f220 - 0x21f2c8
void sub_0021F220_0x21f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F220_0x21f220");
#endif

    switch (ctx->pc) {
        case 0x21f25cu: goto label_21f25c;
        case 0x21f274u: goto label_21f274;
        case 0x21f288u: goto label_21f288;
        case 0x21f2a8u: goto label_21f2a8;
        default: break;
    }

    ctx->pc = 0x21f220u;

    // 0x21f220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f228: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f22c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21f22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f230: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21f234: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21f234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f238: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21f23c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21f240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21f240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21f248: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21f248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21f24c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x21f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x21f250: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21f250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f254: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F254u;
    SET_GPR_U32(ctx, 31, 0x21F25Cu);
    ctx->pc = 0x21F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F254u;
    // 0x21f258: 0x245036b0  addiu       $s0, $v0, 0x36B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F254u, 0x21F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F25Cu;
label_21f25c:
    // 0x21f25c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f260: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F260u;
    {
        const bool branch_taken_0x21f260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F260u;
        // 0x21f264: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f260) {
            ctx->pc = 0x21F280u;
            goto label_21f280;
        }
    }
    ctx->pc = 0x21F268u;
    // 0x21f268: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f26c: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21F26Cu;
    SET_GPR_U32(ctx, 31, 0x21F274u);
    ctx->pc = 0x21F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F26Cu;
    // 0x21f270: 0x34a50157  ori         $a1, $a1, 0x157 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)343);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21F26Cu, 0x21F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F274u;
label_21f274:
    // 0x21f274: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21F274u;
    {
        const bool branch_taken_0x21f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F274u;
        // 0x21f278: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f274) {
            ctx->pc = 0x21F2B0u;
            goto label_21f2b0;
        }
    }
    ctx->pc = 0x21F27Cu;
    // 0x21f27c: 0x0  nop
    ctx->pc = 0x21f27cu;
    // NOP
label_21f280:
    // 0x21f280: 0xc087c2e  jal         func_21F0B8
    ctx->pc = 0x21F280u;
    SET_GPR_U32(ctx, 31, 0x21F288u);
    ctx->pc = 0x21F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F280u;
    // 0x21f284: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F0B8u, 0x21F280u, 0x21F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F288u;
label_21f288:
    // 0x21f288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f28c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f290: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21f290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f294: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21f294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f298: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F298u;
    {
        const bool branch_taken_0x21f298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F298u;
        // 0x21f29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f298) {
            ctx->pc = 0x21F2ACu;
            goto label_21f2ac;
        }
    }
    ctx->pc = 0x21F2A0u;
    // 0x21f2a0: 0xc087cb2  jal         func_21F2C8
    ctx->pc = 0x21F2A0u;
    SET_GPR_U32(ctx, 31, 0x21F2A8u);
    ctx->pc = 0x21F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2A0u;
    // 0x21f2a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2C8u, 0x21F2A0u, 0x21F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2A8u;
label_21f2a8:
    // 0x21f2a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f2ac:
    // 0x21f2ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21f2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f2b0:
    // 0x21f2b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21f2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f2b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21f2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f2b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21f2b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f2bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21f2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C0u;
        // 0x21f2c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F2C8u;
}

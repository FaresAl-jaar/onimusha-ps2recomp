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

// Function: sub_003461B0
// Address: 0x3461b0 - 0x346248
void sub_003461B0_0x3461b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003461B0_0x3461b0");
#endif

    switch (ctx->pc) {
        case 0x3461ccu: goto label_3461cc;
        case 0x3461dcu: goto label_3461dc;
        case 0x346238u: goto label_346238;
        default: break;
    }

    ctx->pc = 0x3461b0u;

    // 0x3461b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3461b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3461b4: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x3461b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x3461b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3461b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3461bc: 0x2484c6e0  addiu       $a0, $a0, -0x3920
    ctx->pc = 0x3461bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    // 0x3461c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3461c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3461c4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3461C4u;
    SET_GPR_U32(ctx, 31, 0x3461CCu);
    ctx->pc = 0x3461C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3461C4u;
    // 0x3461c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3461C4u, 0x3461CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3461CCu;
label_3461cc:
    // 0x3461cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3461CCu;
    {
        const bool branch_taken_0x3461cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3461D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461CCu;
        // 0x3461d0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3461cc) {
            ctx->pc = 0x346238u;
            goto label_346238;
        }
    }
    ctx->pc = 0x3461D4u;
    // 0x3461d4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3461D4u;
    {
        const bool branch_taken_0x3461d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3461D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461D4u;
        // 0x3461d8: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3461d4) {
            ctx->pc = 0x3461F8u;
            goto label_3461f8;
        }
    }
    ctx->pc = 0x3461DCu;
label_3461dc:
    // 0x3461dc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3461dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3461e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3461e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3461e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3461e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3461e8: 0x0  nop
    ctx->pc = 0x3461e8u;
    // NOP
    // 0x3461ec: 0x0  nop
    ctx->pc = 0x3461ecu;
    // NOP
    // 0x3461f0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3461F0u;
    {
        const bool branch_taken_0x3461f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3461f0) {
            ctx->pc = 0x3461DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3461dc;
        }
    }
    ctx->pc = 0x3461F8u;
label_3461f8:
    // 0x3461f8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x3461f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3461fc: 0x101e00  sll         $v1, $s0, 24
    ctx->pc = 0x3461fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x346200: 0x3465000d  ori         $a1, $v1, 0xD
    ctx->pc = 0x346200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x346204: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x346204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x346208: 0x8f838330  lw          $v1, -0x7CD0($gp)
    ctx->pc = 0x346208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x34620c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x34620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x346210: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x346210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x346214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346218: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x346218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34621c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x34621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346220: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x346220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x346224: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x346224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x346228: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x346228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34622c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x34622cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x346230: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x346230u;
    SET_GPR_U32(ctx, 31, 0x346238u);
    ctx->pc = 0x346234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346230u;
    // 0x346234: 0xaf868330  sw          $a2, -0x7CD0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935344), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x346230u, 0x346238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346238u;
label_346238:
    // 0x346238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34623c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34623cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346240: 0x3e00008  jr          $ra
    ctx->pc = 0x346240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346240u;
        // 0x346244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346248u;
}

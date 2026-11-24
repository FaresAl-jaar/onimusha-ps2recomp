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

// Function: sub_00119AD8
// Address: 0x119ad8 - 0x119b80
void sub_00119AD8_0x119ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119AD8_0x119ad8");
#endif

    switch (ctx->pc) {
        case 0x119b00u: goto label_119b00;
        case 0x119b5cu: goto label_119b5c;
        default: break;
    }

    ctx->pc = 0x119ad8u;

    // 0x119ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119adc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119aec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119af0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119af4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x119af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119af8: 0xc04b590  jal         func_12D640
    ctx->pc = 0x119AF8u;
    SET_GPR_U32(ctx, 31, 0x119B00u);
    ctx->pc = 0x119AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AF8u;
    // 0x119afc: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x119AF8u, 0x119B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B00u;
label_119b00:
    // 0x119b00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119b04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x119b04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119b08: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119B08u;
    {
        const bool branch_taken_0x119b08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x119b08) {
            ctx->pc = 0x119B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119B08u;
            // 0x119b0c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119B10u;
            goto label_119b10;
        }
    }
    ctx->pc = 0x119B10u;
label_119b10:
    // 0x119b10: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x119B10u;
    {
        const bool branch_taken_0x119b10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B10u;
        // 0x119b14: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b10) {
            ctx->pc = 0x119B68u;
            goto label_119b68;
        }
    }
    ctx->pc = 0x119B18u;
    // 0x119b18: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x119b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x119b1c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x119b1cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x119b20: 0x3012  mflo        $a2
    ctx->pc = 0x119b20u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x119b24: 0x1810  mfhi        $v1
    ctx->pc = 0x119b24u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x119b28: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x119b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x119b2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119b30: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x119b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x119b34: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x119b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x119b38: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x119b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x119b3c: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x119b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x119b40: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x119b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x119b44: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x119b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x119b48: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x119b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x119b4c: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x119b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x119b50: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x119b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x119b54: 0xc04b590  jal         func_12D640
    ctx->pc = 0x119B54u;
    SET_GPR_U32(ctx, 31, 0x119B5Cu);
    ctx->pc = 0x119B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B54u;
    // 0x119b58: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x119B54u, 0x119B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B5Cu;
label_119b5c:
    // 0x119b5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119b60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x119b60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119b64: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x119b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_119b68:
    // 0x119b68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119b6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119b70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b78: 0x3e00008  jr          $ra
    ctx->pc = 0x119B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B78u;
        // 0x119b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B80u;
}

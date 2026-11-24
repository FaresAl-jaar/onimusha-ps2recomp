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

// Function: sub_003CA200
// Address: 0x3ca200 - 0x3ca2c8
void sub_003CA200_0x3ca200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA200_0x3ca200");
#endif

    switch (ctx->pc) {
        case 0x3ca260u: goto label_3ca260;
        case 0x3ca294u: goto label_3ca294;
        case 0x3ca2b0u: goto label_3ca2b0;
        default: break;
    }

    ctx->pc = 0x3ca200u;

    // 0x3ca200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ca200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ca204: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3ca204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ca208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ca20c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3ca20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ca210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ca210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ca214: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3ca214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ca218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca224: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x3ca224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3ca228: 0xa4602b20  sh          $zero, 0x2B20($v1)
    ctx->pc = 0x3ca228u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11040), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ca22c: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x3ca22cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x3ca230: 0x401827  not         $v1, $v0
    ctx->pc = 0x3ca230u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x3ca234: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca238: 0x90822b24  lbu         $v0, 0x2B24($a0)
    ctx->pc = 0x3ca238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ca23c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ca23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca240: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ca240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca244: 0x26102f28  addiu       $s0, $s0, 0x2F28
    ctx->pc = 0x3ca244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12072));
    // 0x3ca248: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ca248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ca24c: 0xa0822b24  sb          $v0, 0x2B24($a0)
    ctx->pc = 0x3ca24cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ca250: 0x90820735  lbu         $v0, 0x735($a0)
    ctx->pc = 0x3ca250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1845)));
    // 0x3ca254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ca254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ca258: 0xa0820735  sb          $v0, 0x735($a0)
    ctx->pc = 0x3ca258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1845), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ca25c: 0x0  nop
    ctx->pc = 0x3ca25cu;
    // NOP
label_3ca260:
    // 0x3ca260: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ca260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ca264: 0x3883000f  xori        $v1, $a0, 0xF
    ctx->pc = 0x3ca264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)15);
    // 0x3ca268: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x3ca268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x3ca26c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3ca26cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ca270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ca270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ca274: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA274u;
    {
        const bool branch_taken_0x3ca274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA274u;
        // 0x3ca278: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca274) {
            ctx->pc = 0x3CA288u;
            goto label_3ca288;
        }
    }
    ctx->pc = 0x3CA27Cu;
    // 0x3ca27c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3ca27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3ca280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA280u;
    {
        const bool branch_taken_0x3ca280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA280u;
        // 0x3ca284: 0x8c442950  lw          $a0, 0x2950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca280) {
            ctx->pc = 0x3CA28Cu;
            goto label_3ca28c;
        }
    }
    ctx->pc = 0x3CA288u;
label_3ca288:
    // 0x3ca288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ca288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca28c:
    // 0x3ca28c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3CA28Cu;
    SET_GPR_U32(ctx, 31, 0x3CA294u);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3CA28Cu, 0x3CA294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA294u;
label_3ca294:
    // 0x3ca294: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3ca294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3ca298: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x3ca298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ca29c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3CA29Cu;
    {
        const bool branch_taken_0x3ca29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA29Cu;
        // 0x3ca2a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca29c) {
            ctx->pc = 0x3CA260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca260;
        }
    }
    ctx->pc = 0x3CA2A4u;
    // 0x3ca2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ca2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca2a8: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x3CA2A8u;
    SET_GPR_U32(ctx, 31, 0x3CA2B0u);
    ctx->pc = 0x3CA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA2A8u;
    // 0x3ca2ac: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x3CA2A8u, 0x3CA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA2B0u;
label_3ca2b0:
    // 0x3ca2b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ca2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca2b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ca2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA2C0u;
        // 0x3ca2c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA2C8u;
}

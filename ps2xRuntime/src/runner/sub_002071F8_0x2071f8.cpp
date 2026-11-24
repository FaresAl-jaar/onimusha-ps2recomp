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

// Function: sub_002071F8
// Address: 0x2071f8 - 0x20726c
void sub_002071F8_0x2071f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002071F8_0x2071f8");
#endif

    switch (ctx->pc) {
        case 0x20721cu: goto label_20721c;
        default: break;
    }

    ctx->pc = 0x2071f8u;

    // 0x2071f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2071f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2071fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2071fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207200: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x207200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207208: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x207208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20720c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207210: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207214: 0xc081d84  jal         func_207610
    ctx->pc = 0x207214u;
    SET_GPR_U32(ctx, 31, 0x20721Cu);
    ctx->pc = 0x207218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207214u;
    // 0x207218: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207214u, 0x20721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20721Cu;
label_20721c:
    // 0x20721c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x20721cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x207220: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207228: 0x24847650  addiu       $a0, $a0, 0x7650
    ctx->pc = 0x207228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30288));
    // 0x20722c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207230: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x207230u;
    {
        const bool branch_taken_0x207230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207230u;
        // 0x207234: 0x10302b  sltu        $a2, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207230) {
            ctx->pc = 0x207250u;
            goto label_207250;
        }
    }
    ctx->pc = 0x207238u;
    // 0x207238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20723c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20723cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207244: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207248: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x207248u;
    ctx->pc = 0x20724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207248u;
    // 0x20724c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207250u;
label_207250:
    // 0x207250: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x207254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20725c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20725cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207260: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207264: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207264u;
    ctx->pc = 0x207268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207264u;
    // 0x207268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x20726Cu;
}

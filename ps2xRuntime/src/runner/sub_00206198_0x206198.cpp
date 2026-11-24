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

// Function: sub_00206198
// Address: 0x206198 - 0x206220
void sub_00206198_0x206198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206198_0x206198");
#endif
    { static uint32_t n=0; if (++n<=8) fprintf(stderr,"[probe mwPlyStartFname] a0=0x%x name=%s ra=0x%x\n",GPR_U32(ctx,4),(const char*)(rdram+(GPR_U32(ctx,5)&0x1ffffffu)),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x2061b4u: goto label_2061b4;
        default: break;
    }

    ctx->pc = 0x206198u;

    // 0x206198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20619c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2061a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2061a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2061a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2061a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2061a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2061a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2061ac: 0xc081d84  jal         func_207610
    ctx->pc = 0x2061ACu;
    SET_GPR_U32(ctx, 31, 0x2061B4u);
    ctx->pc = 0x2061B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061ACu;
    // 0x2061b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2061ACu, 0x2061B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061B4u;
label_2061b4:
    // 0x2061b4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2061b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2061b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2061bc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2061BCu;
    {
        const bool branch_taken_0x2061bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2061C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061BCu;
        // 0x2061c0: 0x248472a8  addiu       $a0, $a0, 0x72A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061bc) {
            ctx->pc = 0x2061D8u;
            goto label_2061d8;
        }
    }
    ctx->pc = 0x2061C4u;
    // 0x2061c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2061c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2061c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2061c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2061cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2061ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2061d0: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2061D0u;
    ctx->pc = 0x2061D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061D0u;
    // 0x2061d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2061D8u;
label_2061d8:
    // 0x2061d8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2061D8u;
    {
        const bool branch_taken_0x2061d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2061DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D8u;
        // 0x2061dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061d8) {
            ctx->pc = 0x206200u;
            goto label_206200;
        }
    }
    ctx->pc = 0x2061E0u;
    // 0x2061e0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2061e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2061e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2061e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2061e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2061ec: 0x248472d8  addiu       $a0, $a0, 0x72D8
    ctx->pc = 0x2061ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29400));
    // 0x2061f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2061f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2061f4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2061F4u;
    ctx->pc = 0x2061F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061F4u;
    // 0x2061f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2061FCu;
    // 0x2061fc: 0x0  nop
    ctx->pc = 0x2061fcu;
    // NOP
label_206200:
    // 0x206200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20620c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206214: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x206214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206218: 0x8081888  j           func_206220
    ctx->pc = 0x206218u;
    ctx->pc = 0x20621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206218u;
    // 0x20621c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206220u;
    sub_00206220_0x206220(rdram, ctx, runtime); return;
    ctx->pc = 0x206220u;
}
